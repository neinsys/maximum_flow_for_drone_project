#pragma once
#include<vector>
#include<stdlib.h>
struct flowGraph {
	struct edge {
		int to, cap;
		int rev,cost;
	};
	int source;
	int sink;

	std::vector<std::vector<edge>> Graph;
	void set_vertex(int n);
	void add_edge(int from, int to, int cap,int cost);
	void set_source_and_sink(int s, int t);
};


struct point {
	int x, y, z;
    bool operator==(const point& p)const;
    bool operator!=(const point& p)const;
    bool operator<(const point& p)const;
};


struct path : std::vector<point>{
    void add_node(point p);
    void append(path& p);
};

struct droneGraph : flowGraph {
private:
	int X, Y, Z, T;
	int idx(int x, int y, int z, int t);
	int in(int idx);
	int out(int idx);
    int getTime(int idx);
    point getPoint(int idx);
    bool isIn(int idx);
    bool isOut(int idx);
public:
    droneGraph();
	droneGraph(int x, int y, int z, int t);
	void set_startpoint(int x, int y, int z,int cost=0);
	void set_endpoint(int x, int y, int z,int cost=0);
    std::vector<path> find_paths();
};


struct analysis{
	std::vector<path> paths;
	std::vector<int> collsions;
	long T_calc_time;
	long P_calc_time;
	int Mx,My,Mz;
};

bool check_collision(std::vector<path> paths);
void remove_collision(std::vector<path>& paths);
std::vector<int> get_collision(const std::vector<path>&  paths);
std::vector<path> merge_path(std::vector<analysis>& paths,int rest);

