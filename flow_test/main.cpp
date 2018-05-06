#include "pushrelabel.h"
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <chrono>
#include<iostream>
#include <random>
using namespace std;
flowGraph generateRandomFlowGraph(int numVx, int numEdge) {
	random_device rn;
	mt19937_64 rnd(rn());
	uniform_int_distribution<int> vxRange(0, numVx - 1);

	flowGraph ret;
	ret.set_vertex(numVx);
	ret.set_source_and_sink(0, numVx - 1);

	for (int i = 0; i < numEdge; i++) {
		int from = vxRange(rnd);
		int to = vxRange(rnd);
		ret.add_edge(from, to, 1);
	}
	return ret;
}
int numVxs[] = { 500,5000,20000 };
int numEdges[] = { 2000,10000,100000 };
int main() {
	for (int i = 0; i < 3; i++) {
		flowGraph tmp = generateRandomFlowGraph(numVxs[i], numEdges[i]);
		std::cout << numVxs[i] << " and " << numEdges[i] << " flow graph generate" << std::endl;
		std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
		auto ans = push_relabel_cuda(tmp);
		std::chrono::duration<double> sec = std::chrono::system_clock::now() - start;
		std::chrono::microseconds micro = std::chrono::duration_cast<std::chrono::microseconds>(sec);
		std::cout << "max flow : " << ans.second << " time : " << sec.count() << "ms" << std::endl;
   }
}
