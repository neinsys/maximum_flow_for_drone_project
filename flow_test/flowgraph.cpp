#include "flowgraph.h"


void flowGraph::set_vertex(int n) {
	Graph.resize(n);
}

void flowGraph::add_edge(int from, int to, int cap) {
	edge ori = { to,cap,Graph[to].size() };
	edge rev = { from,0,Graph[from].size() };
	Graph[from].push_back(ori);
	Graph[to].push_back(rev);
}

void flowGraph::set_source_and_sink(int s, int t) {
	source = s;
	sink = t;
}

droneGraph::droneGraph(int X, int Y, int Z, int T) : X(X), Y(Y), Z(Z), T(T){
	source = 0;
	sink = X * Y*Z*T*2 + 1;
	set_vertex(sink + 1);
	auto inner = [&](int x, int y, int z) {
		return 0 <= x && x < X && 0 <= y && y < Y && 0 <= z && z < Z;
	};
	for (int t = 0; t < T; t++) {
		for (int x = 0; x < X; x++) {
			for (int y = 0; y < Y; y++) {
				for (int z = 0; z < Z; z++) {
					add_edge(in(idx(x, y, z, t)), out(idx(x, y, z, t)), 1);
				}
			}
		}
	}

	#pragma omp parallel for
	for (int t = 0; t < T - 1; t++) {
		for (int x = 0; x < X; x++) {
			for (int y = 0; y < Y; y++) {
				for (int z = 0; z < Z; z++) {
		
					for (int dx = -1; dx <= 1; dx++) {
						for (int dy = -1; dy <= 1; dy++) {
							for (int dz = -1; dz <= 1; dz++) {
								int nx = x + dx;
								int ny = y + dy;
								int nz = z + dz;
								if (inner(nx, ny, nz)) {
									add_edge(out(idx(x, y, z, t)), in(idx(nx, ny, nz, t + 1)), 1);
								}
							}
						}
					}


				}
			}
		}
	}
}

void droneGraph::set_startpoint(int x, int y, int z) {
	add_edge(source, in(idx(x, y, z, 0)),1);
}

void droneGraph::set_endpoint(int x, int y, int z) {
	add_edge(out(idx(x, y, z, T - 1)), sink, 1);
}

int droneGraph::idx(int x, int y, int z, int t) {
	return t * X*Y*Z +
		z * X*Y +
		y * X +
		x +
		1;
}
int droneGraph::in(int idx) {
	return idx * 2 - 1;
}
int droneGraph::out(int idx) {
	return idx * 2;
}