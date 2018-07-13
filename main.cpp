#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <chrono>
#include<iostream>
#include <random>
#include <assert.h>
#include <string.h>
#include "Dinic.h"
#include "flowgraph.h"
using namespace std;
std::pair<double,double> testRandomFlowGraph(int numVx, int numEdge) {
	char file[20];
	//sprintf(file, "input%03d", idx);
	//FILE* fp = fopen(file, "w");
	random_device rn;
	mt19937_64 rnd(rn());
	uniform_int_distribution<int> vxRange(0, numVx - 1);
	uniform_int_distribution<int> costRange(0, 100000);
	//fprintf(fp, "%d %d\n", numVx, numEdge);
	flowGraph ret;
	ret.set_vertex(numVx);
	ret.set_source_and_sink(0, numVx - 1);
	//Dinic D(numVx, 0, numVx - 1);
	for (int i = 0; i < numEdge; i++) {
		int from = vxRange(rnd);
		int to = vxRange(rnd);
		int cap =  costRange(rnd);
		if (from == to)continue;
	//	fprintf(fp, "%d %d %d\n", from, to, cap);
		//std::cout << "edge : " << from << "->" << to << " : " << cap << std::endl;
		ret.add_edge(from, to, cap,0);
	//	D.add_edge(from, to, cap);
	}
	//fclose(fp);
	std::cout << numVx << " and " << numEdge << " flow graph generate" << std::endl;
	int A=-1, B=-1;
    flowGraph P=ret;
    double a=-1,b=-1;
	{

        Dinic D(&ret);
		std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
		auto ans = D.flow();
		std::chrono::duration<double> sec = std::chrono::system_clock::now() - start;
		std::chrono::microseconds micro = std::chrono::duration_cast<std::chrono::microseconds>(sec);
		std::cout << "max flow(Dinic) : " << ans << " time : " << sec.count() << "ms" << std::endl;
		A = ans;
        a=sec.count();
	}
	if (A != B && numVx<=100000) {
		std::cout << "error " << A << " and " << B << std::endl;
		assert(A == B);
	}
    return {a,b};

}



void fileReadTest(const char* filepath) {
	int numVx, numEdge;
	FILE* fp = fopen(filepath, "r");
	fscanf(fp,"%d%d", &numVx, &numEdge);
	flowGraph ret;
	ret.set_vertex(numVx);
	ret.set_source_and_sink(0, numVx - 1);
	for (int i = 0; i < numEdge; i++) {
		int from, to, cap;
		fscanf(fp, "%d%d%d", &from, &to, &cap);
		
		if (from == to)continue;
		std::cout << "edge : " << from << "->" << to << " : " << cap << std::endl;
		ret.add_edge(from, to, cap,0);
		//D.add_edge(from, to, cap);
	}
	std::cout << numVx << " and " << numEdge << " flow graph generate" << std::endl;
	int A = -1, B = -1;
	{
        Dinic D(&ret);
		std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
		
        auto ans = D.flow();
		std::chrono::duration<double> sec = std::chrono::system_clock::now() - start;
		std::chrono::microseconds micro = std::chrono::duration_cast<std::chrono::microseconds>(sec);
		std::cout << "max flow(Dinic) : " << ans << " time : " << sec.count() << "ms" << std::endl;
		A = ans;
	}
	if (A != B) {
		std::cout << "error " << A << " and " << B << std::endl;
		assert(A == B);
	}

}

int numVxs[] = { 5,500,5000,20000 };
int numEdges[] = { 5,2000,10000,100000 };

bool chk[110][110][110];

double avg[20][2];
int main() {
/*
    FILE* fp = fopen("result.csv","w");
    int idx=1;
    for(int i=10;i<=10000000;i*=10,idx++){
        for(int k=0;k<100;k++){
            auto result = testRandomFlowGraph(i,i*20);
            fprintf(fp,"%d,%.6lf,%.6lf\n",i,result.first,result.second);
            avg[idx][0]+=result.first;
            avg[idx][1]+=result.second;
        }
    }
    for(int i=1,p=10;i<idx;i++,p*=10){
        fprintf(fp,"%d,%.6lf,%.6lf\n",p,avg[i][0],avg[i][1]);
    }
    fclose(fp);*/
	//fileReadTest("input040");
	/*for (int k = 0; k < 100; k++) {
		testRandomFlowGraph(2000, 80000,k);
	}*/
	vector<point> S, E;
	random_device rn;
	mt19937_64 rnd(rn());
	const int N = 50;
	uniform_int_distribution<int> vxRange(0, N-1);
	for (int k = 0; k < 100; k++) {
		int x = vxRange(rnd);
		int y = vxRange(rnd);
		int z = vxRange(rnd);
		if (!chk[x][y][z]) {
			S.push_back({ x,y,z });
			chk[x][y][z] = true;
		}
		else {
			k--;
		}
	}
	memset(chk, 0, sizeof(chk));
	for (int k = 0; k < 100; k++) {
		int x = vxRange(rnd);
		int y = vxRange(rnd);
		int z = vxRange(rnd);
		if (!chk[x][y][z]) {
			E.push_back({ x,y,z });
			chk[x][y][z] = true;
		}
		else {
			k--;
		}
	}
	std::cout << "finish random point" << std::endl;
	droneGraph G(N, N, N, 30);
	std::cout <<"number of vertex : "<< G.Graph.size() << std::endl;
	for (const point& p : S) {
		G.set_startpoint(p.x, p.y, p.z);
	}
	for (const point& p : E) {
		G.set_endpoint(p.x, p.y, p.z);
	}
	std::cout << "create drone graph" << std::endl;
	{
        Dinic D(&G);
		std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
		auto ans=D.flow();
        //auto ans = push_relabel_cuda(G);
		std::chrono::duration<double> sec = std::chrono::system_clock::now() - start;
		std::chrono::microseconds micro = std::chrono::duration_cast<std::chrono::microseconds>(sec);
		std::cout << "max flow(Dinic) : " << ans << " time : " << sec.count() << "s" << std::endl;
        auto paths= G.find_paths();
        remove_collision(paths);
        printf("%d\n",check_collision(paths));
       /* for(path* p:paths){
            int t=0;
            printf("--------------------\n");
            for(node* it=p->head;it!=NULL;it=it->next){
                printf("%d %d %d %d\n",t,it->p.x,it->p.y,it->p.z);
                t++;
            }
        }*/
	}


}
