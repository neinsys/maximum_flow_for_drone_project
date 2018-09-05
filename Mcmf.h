//
// Created by nein on 18. 7. 12.
//

#ifndef CROW_ALL_MCMF_H
#define CROW_ALL_MCMF_H



#include<vector>
#include "flowgraph.h"
using std::vector;
using std::pair;


struct MCMF {
	droneGraph G;
	vector<int> dist;
	vector<int> chk;
	vector<pair<int, int>> from;
	vector<int> pi;
	vector<int> level;
	vector<int> iter;
	int source, sink;
	const int INF = 0x7fffffff / 2;
	MCMF(droneGraph G);
	void getPotential();
	bool dijkstra() ;
	int dfs(int v, int t, int f);
	pair<int, int> flow();
};


#endif //CROW_ALL_MCMF_H
