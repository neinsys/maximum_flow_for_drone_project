#ifndef __PUSH_RELABEL_H__
#define __PUSH_RELABEL_H__
#include<vector>

struct flowGraph {
	struct edge {
		int to, cap;
		int rev;
	};
	int source;
	int sink;

	std::vector<std::vector<edge>> Graph;
	void set_vertex(int n) {
		Graph.resize(n);
	}
	void add_edge(int from, int to, int cap) {
		edge ori = { to,cap,Graph[to].size() };
		edge rev = { from,0,Graph[from].size() };
		Graph[from].push_back(ori);
		Graph[to].push_back(rev);
	}
	void set_source_and_sink(int s, int t) {
		source = s;
		sink = t;
	}
};

std::pair<flowGraph, int> push_relabel_cuda(flowGraph graph_h);


#endif