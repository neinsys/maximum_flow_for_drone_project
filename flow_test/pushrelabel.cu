#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <cuda.h>
#include <omp.h>
#include <cuda_runtime.h>
#include <driver_functions.h>
#include <device_functions.h>
#include <math_constants.h>
#include <thrust/host_vector.h>
#include <thrust/device_vector.h>
#include <thrust/copy.h>
#include <queue>
#include "pushrelabel.h"


using std::vector;
using std::pair;
using edge = flowGraph::edge;
using thrust::device_vector;

#define KERNEL_CYCLES 150

#define min(a,b) (a)<(b)?(a):(b);
#define UPDIV(n, d)   (((n) + (d) - 1) / (d))

static dim3 threadsPerBlock(1024, 1, 1);


//global function
__global__ void push_relabel_kernel(edge* graph,int* startIdx, int* height, int* excessFlow, int n, int s, int t) {
	int index = blockDim.x*blockIdx.x + threadIdx.x;

	int u = index;
	int cycle = KERNEL_CYCLES;
	for (int _ = 0; _ < cycle; _++) {
		int curExcess = excessFlow[u];
		if (curExcess > 0 && height[u] < n) {
			int curLowestNeighbor = -1;
			int neighborMinHeight = (int)CUDART_INF;
			
			//find lowest height in neighborhood
			int i = 0;
			int size = startIdx[u + 1] - startIdx[u];
			for(int i=0;i<size;i++){
				const edge& e = graph[startIdx[u]+i];
				int to = e.to;
				int tempHeight = height[to];
				if (neighborMinHeight > tempHeight ) {
					neighborMinHeight = tempHeight;
					curLowestNeighbor = i;
				}
				i++;
			}

			if (height[u] > neighborMinHeight) {
				int delta = min(curExcess, graph[startIdx[u]+curLowestNeighbor].cap);
				int v = graph[startIdx[u]+curLowestNeighbor].to;
				int rev = graph[startIdx[u]+curLowestNeighbor].rev;
				atomicAdd(&graph[startIdx[v]+rev].cap, delta);
				atomicSub(&graph[startIdx[u]+curLowestNeighbor].cap, delta);
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
__host__ void global_relabel_cpu(edge* graph, int* startIdx,int* height,int* excessFlow,int* excessTotal,bool* marked,int n,int t) {
	//violation-cancellation
	for (int u = 0; u < n; u++) {
		for (int i = startIdx[u]; i < startIdx[u + 1]; i++) {
			edge& e = graph[i];
			int v = e.to;
			edge& rev = graph[startIdx[v]+e.rev];
			excessFlow[u] -= e.cap;
			excessFlow[v] += e.cap;
			rev.cap += e.cap;
			e.cap = 0;
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
		}
	}
}

//host function
__host__ void init_flow(flowGraph* graph, int* height, int* excessFlow, int* excessTotal, int n, int s) {
	for (int i = 0; i < n; i++) {
		height[i] = 0;
		excessFlow[i] = 0;
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


std::pair<flowGraph,int> push_relabel_cuda(flowGraph graph) {
	int n = graph.Graph.size();
	int source = graph.source;
	int sink = graph.sink;
	
	//CPU main memory initialize
	int* excessFlow_h = (int*)malloc(sizeof(int)*n);
	int* height_h = (int*)malloc(sizeof(int)*n);
	int* startIdx_h = (int*)malloc(sizeof(int)*(n+1));
	edge* graph_h;
	bool* marked = (bool*)malloc(sizeof(bool)*n);
	int excessTotal = 0;

	//CUDA global memory initialize
	int* excessFlow_d;
	int* height_d;
	edge* graph_d;
	int* startIdx_d;
	
	cudaMalloc((void**)&excessFlow_d, sizeof(int)*n);
	cudaMalloc((void**)&height_d, sizeof(int)*n);
	cudaMalloc((void**)&startIdx_d, sizeof(int)*(n+1));

	int sum = 0;

	startIdx_h[0] = 0;
	for (int i = 0; i < n; i++) {
		sum += graph.Graph[i].size();
		startIdx_h[i + 1] = sum;
	}
	cudaMemcpy(startIdx_d, startIdx_h, sizeof(int)*(n + 1), cudaMemcpyHostToDevice);

	graph_h = (edge*)malloc(sizeof(edge)*sum);
	cudaMalloc((void**)&graph_d, sizeof(edge*)*sum);

	//Initialize e,h,cf and excessTotal
	init_flow(&graph,height_h,excessFlow_h,&excessTotal,n,source);

	//copy e and cf from the CPU main memory to the CUDA global memory
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < graph.Graph[i].size(); j++) {
			graph_h[startIdx_h[i] + j] = graph.Graph[i][j];
		}
	}
	cudaMemcpy(graph_d, graph_h, sizeof(edge)*sum, cudaMemcpyHostToDevice);
	cudaMemcpy(excessFlow_d, excessFlow_h, sizeof(int)*n, cudaMemcpyHostToDevice);

	while (excessFlow_h[source] + excessFlow_h[sink] < excessTotal) {
		//copy h from the CPU main memory to the CUDA global memory
		cudaMemcpy(height_d, height_h, sizeof(int)*n, cudaMemcpyHostToDevice);

		//call push_relabel_kernel()
		int numBlocks = UPDIV(n, threadsPerBlock.x);
		push_relabel_kernel <<<numBlocks, threadsPerBlock>>> (graph_d, startIdx_d, height_d, excessFlow_d, n, source, sink);

		//copy cf, h and e from CUDA global memory to CPU main memory
		for (int i = 0; i < n; i++) {
			cudaMemcpy(graph_h + startIdx_h[i], graph_d + startIdx_h[i], startIdx_h[i + 1] - startIdx_h[i], cudaMemcpyDeviceToHost);
		}
		cudaMemcpy(height_h, height_d, sizeof(int)*n, cudaMemcpyDeviceToHost);
		cudaMemcpy(excessFlow_h, excessFlow_d, sizeof(int)*n, cudaMemcpyDeviceToHost);

		//call global_relabel_cpu()
		global_relabel_cpu(graph_h,startIdx_h,height_h,excessFlow_h,&excessTotal,marked,n,sink);
	}

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < startIdx_h[i + 1] - startIdx_h[i]; j++) {
			graph.Graph[i][j] = graph_h[startIdx_h[i] + j];
		}
	}

	return { graph,-excessFlow_h[sink] };
}