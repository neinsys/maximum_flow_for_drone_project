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

struct node{
    point p;
    node* prev;
    node* next;
};

struct path{
    node* head=NULL;
    node* tail=NULL;
    int sz=0;
    void add_node(point p);
    int size();
    ~path();
    void pop_front();
    void pop_back();
    void append(path* p);
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
	void set_startpoint(int x, int y, int z);
	void set_endpoint(int x, int y, int z);
    std::vector<path*> find_paths();
};


bool check_collision(std::vector<path*> paths);
void remove_collision(std::vector<path*> paths);
std::vector<path*> merge_path(std::vector<std::vector<path*>>& paths,int rest);

