#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cuda.h>
#include <omp.h>
#include <cuda_runtime.h>
#include <driver_functions.h>
#include <device_functions.h>
#include <math_constants.h>
#include <queue>
#include "pushrelabel.h"


using std::vector;
using std::pair;
using edge = flowGraph::edge;

#define DEBUG
#ifdef DEBUG
#define cudaCheckError(ans) { cudaAssert((ans), __FILE__, __LINE__); }
inline void cudaAssert(cudaError_t code, const char *file, int line,
	bool abort = true)
{
	if (code != cudaSuccess)
	{
		fprintf(stderr, "CUDA Error: %s at %s:%d\n",
			cudaGetErrorString(code), file, line);
		if (abort) exit(code);
	}
}
#else
#define cudaCheckError(ans) ans
#endif



#define KERNEL_CYCLES 150

#define min(a,b) (a)<(b)?(a):(b);
#define UPDIV(n, d)   (((n) + (d) - 1) / (d))

static dim3 threadsPerBlock(1024, 1, 1);


//global function
__global__ void push_relabel_kernel(edge* graph, int* startIdx, int* height, int* excessFlow, int n, int s, int t) {
	int index = blockDim.x*blockIdx.x + threadIdx.x;

	int u = index;
	if ((u < 0 || u >= n) || u == t || u == s)return;

	int cycle = KERNEL_CYCLES;
	for (int _ = 0; _ < cycle; _++) {
		int curExcess = excessFlow[u];
		if (curExcess > 0 && height[u] < n) {
			int curLowestNeighbor = -1;
			int neighborMinHeight = ((int)CUDART_INF) / 2;

			//find lowest height in neighborhood
			int size = startIdx[u + 1] - startIdx[u];
			for (int i = 0; i < size; i++) {
				const edge& e = graph[startIdx[u] + i];
				int to = e.to;
				int tempHeight = height[to];
				if (neighborMinHeight > tempHeight && e.cap > 0) {
					neighborMinHeight = tempHeight;
					curLowestNeighbor = i;
				}
			}

			if (height[u] > neighborMinHeight && curLowestNeighbor != -1) {
				int delta = min(curExcess, graph[startIdx[u] + curLowestNeighbor].cap);
				int v = graph[startIdx[u] + curLowestNeighbor].to;
				int rev = graph[startIdx[u] + curLowestNeighbor].rev;
				atomicAdd(&graph[startIdx[v] + rev].cap, delta);
				atomicSub(&graph[startIdx[u] + curLowestNeighbor].cap, delta);
				atomicAdd(&excessFlow[v], delta);
				atomicSub(&excessFlow[u], delta);
			}
			else {
				height[u] = neighborMinHeight + 1;
			}
		}
	}
}

//host function
__host__ void global_relabel_cpu(edge* graph, int* startIdx, int* height, int* excessFlow, int* excessTotal, bool* marked, int n, int s, int t) {
	//violation-cancellation
	for (int u = 0; u < n; u++) {
		for (int i = startIdx[u]; i < startIdx[u + 1]; i++) {
			edge& e = graph[i];
			int v = e.to;
			edge& rev = graph[startIdx[v] + e.rev];
			if (height[u] > height[v] + 1) {
				excessFlow[u] -= e.cap;
				excessFlow[v] += e.cap;
				rev.cap += e.cap;
				e.cap = 0;
			}
		}
	}
	//do a backwards BFS from the sink and assign the height function with each vertex's BFS tree level
	std::queue<int> que;
	que.push(t);
	std::fill(height, height + n, n);
	height[t] = 0;

	while (!que.empty()) {
		int idx = que.front();
		que.pop();

		for (int i = startIdx[idx]; i < startIdx[idx + 1]; i++) {
			edge& e = graph[i];
			int v = e.to;
			int cap = graph[startIdx[v] + e.rev].cap;
			if (cap > 0 && height[v] > height[idx] + 1) {
				height[v] = height[idx] + 1;
				que.push(v);
			}
		}
	}

	//marking vertex that not are relabeled
	for (int i = 0; i < n; i++) {
		if (!marked[i] && height[i] == n) {
			marked[i] = true;
			*excessTotal -= excessFlow[i];
			excessFlow[i] = 0;
		}
	}
}

//host function
__host__ void init_flow(flowGraph* graph, int* height, int* excessFlow, int* excessTotal,bool* marked, int n, int s, int t) {
	for (int i = 0; i < n; i++) {
		height[i] = 0;
		excessFlow[i] = 0;
		marked[i] = 0;
	}
	height[s] = n;

	for (edge& ori : graph->Graph[s]) {
		int to = ori.to;
		edge& rev = graph->Graph[to][ori.rev];
		int cap = ori.cap;

		ori.cap -= cap;
		rev.cap += cap;
		excessFlow[to] += cap;
		*excessTotal += cap;
	}
}


std::pair<flowGraph, int> push_relabel_cuda(flowGraph graph) {
	int n = graph.Graph.size();
	int source = graph.source;
	int sink = graph.sink;

	//CPU main memory initialize
	int* excessFlow_h = (int*)malloc(sizeof(int)*n);
	int* height_h = (int*)malloc(sizeof(int)*n);
	int* startIdx_h = (int*)malloc(sizeof(int)*(n + 1));
	edge* graph_h;
	bool* marked = (bool*)malloc(sizeof(bool)*n);
	int excessTotal = 0;

	//CUDA global memory initialize
	int* excessFlow_d;
	int* height_d;
	edge* graph_d;
	int* startIdx_d;

	cudaCheckError(cudaMalloc((void**)&excessFlow_d, sizeof(int)*n));
	cudaCheckError(cudaMalloc((void**)&height_d, sizeof(int)*n));
	cudaCheckError(cudaMalloc((void**)&startIdx_d, sizeof(int)*(n + 1)));

	int sum = 0;

	startIdx_h[0] = 0;
	for (int i = 0; i < n; i++) {
		sum += graph.Graph[i].size();
		startIdx_h[i + 1] = sum;
	}
	cudaCheckError(cudaMemcpy(startIdx_d, startIdx_h, sizeof(int)*(n + 1), cudaMemcpyHostToDevice));

	graph_h = (edge*)malloc(sizeof(edge)*sum);
	cudaCheckError(cudaMalloc((void**)&graph_d, sizeof(edge)*sum));

	//Initialize e,h,cf and excessTotal
	init_flow(&graph, height_h, excessFlow_h, &excessTotal, marked, n, source, sink);

	//copy e and cf from the CPU main memory to the CUDA global memory
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < graph.Graph[i].size(); j++) {
			graph_h[startIdx_h[i] + j] = graph.Graph[i][j];
		}
	}
	cudaCheckError(cudaMemcpy(graph_d, graph_h, sizeof(edge)*sum, cudaMemcpyHostToDevice));
	cudaCheckError(cudaMemcpy(excessFlow_d, excessFlow_h, sizeof(int)*n, cudaMemcpyHostToDevice));

	while (excessFlow_h[source] + excessFlow_h[sink] < excessTotal) {
		//while(netFlowOutS_h!=netFlowInT_h){
			//copy h from the CPU main memory to the CUDA global memory
		cudaCheckError(cudaMemcpy(height_d, height_h, sizeof(int)*n, cudaMemcpyHostToDevice));

		//call push_relabel_kernel()
		int numBlocks = UPDIV(n, threadsPerBlock.x);
		push_relabel_kernel <<<numBlocks, threadsPerBlock >>> (graph_d, startIdx_d, height_d, excessFlow_d, n, source, sink);

		//copy cf, h and e from CUDA global memory to CPU main memory
		cudaCheckError(cudaMemcpy(graph_h, graph_d, sizeof(edge)*sum, cudaMemcpyDeviceToHost));
		cudaCheckError(cudaMemcpy(height_h, height_d, sizeof(int)*n, cudaMemcpyDeviceToHost));
		cudaCheckError(cudaMemcpy(excessFlow_h, excessFlow_d, sizeof(int)*n, cudaMemcpyDeviceToHost));

		//call global_relabel_cpu()
		global_relabel_cpu(graph_h, startIdx_h, height_h, excessFlow_h, &excessTotal, marked, n, source, sink);

	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < startIdx_h[i + 1] - startIdx_h[i]; j++) {
			graph.Graph[i][j].cap = graph_h[startIdx_h[i] + j].cap;
		}
	}

	cudaCheckError(cudaFree(excessFlow_d));
	cudaCheckError(cudaFree(height_d));
	cudaCheckError(cudaFree(startIdx_d));
	
	cudaCheckError(cudaFree(graph_d));
    return { graph,excessFlow_h[sink] };
}
