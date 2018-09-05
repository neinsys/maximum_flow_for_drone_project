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
using edge = droneGraph::edge;
const int INF = 0x7fffffff / 2;
struct Dinic {
    droneGraph G;
	vector<int> level;
	vector<int> iter;
	int source;
	int sink;
	Dinic(droneGraph G);
	bool bfs(int s);
	int dfs(int v, int t, int f);
    int flow();
};
