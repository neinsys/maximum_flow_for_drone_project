#pragma once
#include<vector>
#include<queue>
#include<algorithm>
#include "flowgraph.h"
using std::vector;
using std::pair;
using lint = long long int;
using pii = std::pair<int, int>;
using std::queue;
using edge = flowGraph::edge;
const int INF = 0x7fffffff / 2;
struct Dinic {

    flowGraph* G;
	vector<int> level;
	vector<int> iter;
	int source;
	int sink;
	Dinic(flowGraph* G) :G(G),source(G->source), sink(G->sink) {
		level.resize(G->Graph.size());
		iter.resize(G->Graph.size());
	}

	bool bfs(int s) {
		std::fill(level.begin(), level.end(), -1);
		std::fill(iter.begin(), iter.end(), 0);
		queue<int> que;
		level[s] = 0;
		que.push(s);
		while (!que.empty()) {
			int v = que.front();
			que.pop();
			for (int i = 0; i < G->Graph[v].size(); i++) {
				edge & e = G->Graph[v][i];
				if (e.cap > 0 && level[e.to] < 0) {
					level[e.to] = level[v] + 1;
					que.push(e.to);
				}
			}
		}
		return level[sink] >= 0;
	}
	int dfs(int v, int t, int f) {
		if (v == t) return f;
		for (int &i = iter[v]; i < G->Graph[v].size(); i++) {
			edge &e = G->Graph[v][i];
			if (e.cap > 0 && level[v] < level[e.to]) {
				int d = dfs(e.to, t, std::min(f, e.cap));
				if (d > 0) {
					e.cap -= d;
					G->Graph[e.to][e.rev].cap += d;
					return d;
				}
			}
		}
		return 0;
	}
	int flow() {
		int flow = 0;
		while (bfs(source)) {
			int f;
			while ((f = dfs(source, sink, INF)) > 0) {
				flow += f;
			}
		}
		return flow;
	}
};
