#include "flowgraph.h"
#include "find_path.h"
#include<assert.h>
#include<stdlib.h>
#include<algorithm>
#include<set>
#include<tuple>
#include<map>
#include<omp.h>
void flowGraph::set_vertex(int n) {
	Graph.resize(n);
}

void flowGraph::add_edge(int from, int to, int cap,int cost) {
	edge ori = { to,cap,Graph[to].size(),cost };
	edge rev = { from,0,Graph[from].size(),-cost };
	Graph[from].push_back(ori);
	Graph[to].push_back(rev);
}

void flowGraph::set_source_and_sink(int s, int t) {
	source = s;
	sink = t;
}

droneGraph::droneGraph(){}

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
					add_edge(in(idx(x, y, z, t)), out(idx(x, y, z, t)), 1,0);
				}
			}
		}
	}

	#pragma omp parallel for
	for (int t = 0; t < T - 1; t++) {
        #pragma omp parallel for
		for (int x = 0; x < X; x++) {
			for (int y = 0; y < Y; y++) {
				for (int z = 0; z < Z; z++) {
		
					for (int dx = -1; dx <= 1; dx++) {
						for (int dy = -1; dy <= 1; dy++) {
							for (int dz = -1; dz <= 1; dz++) {
								int nx = x + dx;
								int ny = y + dy;
								int nz = z + dz;
								int cost = abs(dx)+abs(dy)+abs(dz)+2;
                                if(cost==2) cost=0;
								if (inner(nx, ny, nz)) {
									add_edge(out(idx(x, y, z, t)), in(idx(nx, ny, nz, t + 1)), 1,cost);
								}
							}
						}
					}


				}
			}
		}
	}
}

void path::add_node(point p){
    push_back(p);
}
void path::append(path& p){
    insert(end(),p.begin(),p.end());
}

bool point::operator==(const point& p)const{
    return x==p.x && y==p.y && z==p.z;
}
bool point::operator!=(const point& p)const{
    return x!=p.x || y!=p.y || z!=p.z;
}
bool point::operator<(const point& p)const{
    return std::make_tuple(x,y,z) <std::make_tuple(p.x,p.y,p.z);
}

void droneGraph::set_startpoint(int x, int y, int z,int cost) {
	add_edge(source, in(idx(x, y, z, 0)),1,cost);
}

void droneGraph::set_endpoint(int x, int y, int z,int cost) {
	add_edge(out(idx(x, y, z, T - 1)), sink, 1,cost);
}
bool droneGraph::isIn(int idx){
    return idx%2==1;
}
bool droneGraph::isOut(int idx){
    return idx%2==0;
}


int droneGraph::getTime(int idx){
    idx = (idx+1)/2;
    idx = (idx-1);
    idx = idx/(X*Y*Z);
    return idx;
}
point droneGraph::getPoint(int idx){
    idx = (idx+1)/2;
    idx = (idx-1);
    idx %= X*Y*Z;
    int z = idx/(X*Y);
    idx %= X*Y;
    int y = idx/X;
    idx %= X;
    int x=idx;
    return {x,y,z};
}
std::vector<path> droneGraph::find_paths(){
    std::vector<path> paths;
    for(const edge& e:Graph[sink]){
        if(e.cap>0){
            point p=getPoint(e.to);
            std::vector<point> P;
            int idx=e.to;
            while(!(isIn(idx) && getTime(idx)==0)){
                if(isOut(idx)){
                    for(const edge& e:Graph[idx]){
                        P.push_back(getPoint(idx));
                        int to=e.to;
                        if(getPoint(idx)==getPoint(to) && isIn(to) && e.cap>0){
                            idx=to;
                            break;
                        }
                    }
                }
                else if(isIn(idx)){
                    for(const edge& e:Graph[idx]){
                        int to=e.to;
                        if(to==source && e.cap>0)break;
                        if(isOut(to) && getTime(idx)-1==getTime(to) && e.cap>0){
                            idx=to;
                            break;
                        }
                    }
                }
            }
            std::reverse(P.begin(),P.end());
    
            path p_list;
            for(point& p:P){
                p_list.add_node(p);
            }
            paths.push_back(p_list);

        }
    }


    return paths;
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

bool check_collision(std::vector<path> paths){
    std::set<std::pair<int,point>> set;
    for(path p:paths){
        int t=0;
        for(auto it=p.begin();std::next(it)!=p.end();it=std::next(it),t++){
            int x=it->x+std::next(it)->x;
            int y=it->y+std::next(it)->y;
            int z=it->z+std::next(it)->z;
            if(set.count({t,{x,y,z}})){
                return true;
            }
            set.insert({t,{x,y,z}});
        }
    }
    return false;
}
std::vector<int> get_collision(const std::vector<path>& paths){
    std::map<std::pair<int,point>,int> map;
    for(path p:paths){
        int t=0;
        for(auto it=p.begin();std::next(it)!=p.end();it=std::next(it),t++){
            int x=it->x+std::next(it)->x;
            int y=it->y+std::next(it)->y;
            int z=it->z+std::next(it)->z;

            map[{t,{x,y,z}}]++;
        }
    }
    std::vector<int> cnt(5,0);
    for(auto& p:map){
        cnt[p.second]++;
    }
    return cnt;
}

int abss(int a){
    if(a<0)return -a;
    return a;
}
void remove_collision(std::vector<path>& paths){
    for(int D=3;D>=1;D--){
        int T=(int)paths[0].size()-1;
        for(int t=0;t<T;t++){
            for(int i=0;i<(int)paths.size();i++){
                for(int j=i+1;j<(int)paths.size();j++){
                    int x1 = paths[i][t].x + paths[i][t+1].x;
                    int y1 = paths[i][t].y + paths[i][t+1].y;
                    int z1 = paths[i][t].z + paths[i][t+1].z;

                    int x2 = paths[j][t].x + paths[j][t+1].x;
                    int y2 = paths[j][t].y + paths[j][t+1].y;
                    int z2 = paths[j][t].z + paths[j][t+1].z;

                    int d = abss(paths[i][t].x - paths[i][t+1].x) +
                            abss(paths[i][t].y - paths[i][t+1].y) +
                            abss(paths[i][t].z - paths[i][t+1].z);

                    if(x1 == x2 && y1 == y2 && z1 == z2 && D == d){

                        for(int p=t+1;p<=T;p++){
                            std::swap(paths[i][p],paths[j][p]);
                        }
                    }

                }

            }
        }
    }
}

std::vector<path> merge_path(std::vector<analysis>& paths,int rest=0){
    std::vector<path> ret;
    if(!paths.empty())ret= paths.front().paths;
    for(int k=1;k<(int)paths.size();k++){
        std::map<point,int> map;
        for(int i=0;i<rest;i++){
            for(path p:ret){
                p.push_back(p.back());
            }
        }
        for(int i=0;i<ret.size();i++){
            map[ret[i].back()] = i;
        }

        for(path q:paths[k].paths){
            if(map.count(q.front())==0){
                fprintf(stderr,"error : not matching between two image");
            }
            int p=map[q.front()];
            q.erase(q.begin());
            ret[p].append(q);
        }
    }
    return ret;
}
