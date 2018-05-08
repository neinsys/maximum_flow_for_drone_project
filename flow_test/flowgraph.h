#pragma once
#include<vector>
struct flowGraph {
	struct edge {
		int to, cap;
		int rev;
	};
	int source;
	int sink;

	std::vector<std::vector<edge>> Graph;
	void set_vertex(int n);
	void add_edge(int from, int to, int cap);
	void set_source_and_sink(int s, int t);
};


struct droneGraph : flowGraph {
private:
	int X, Y, Z, T;
	int idx(int x, int y, int z, int t);
	int in(int idx);
	int out(int idx);
public:
	droneGraph(int x, int y, int z, int t);
	void set_startpoint(int x, int y, int z);
	void set_endpoint(int x, int y, int z);
};
struct point {
	int x, y, z;
};