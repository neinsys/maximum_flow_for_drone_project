#include "flowgraph.h"
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
					add_edge(in(idx(x, y, z, t)), out(idx(x, y, z, t)), 1);
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

void path::add_node(point p){
    node* tmp = new node;
    tmp->p=p;
    tmp->next=NULL;
    if(head==NULL && tail==NULL){
        head=tail=tmp;
    }
    else{
        tail->next=tmp;
        tail=tmp;
    }
}
path::~path(){
    if(head!=NULL){
        node* it=head;
        while(it){
            node* tmp=it;
            it=it->next;
            delete tmp;
        }
    }
    head=tail=NULL;
}

bool point::operator==(const point& p)const{
    return x==p.x && y==p.y && z==p.z;
}
bool point::operator<(const point& p)const{
    return std::make_tuple(x,y,z) <std::make_tuple(p.x,p.y,p.z);
}

void droneGraph::set_startpoint(int x, int y, int z) {
	add_edge(source, in(idx(x, y, z, 0)),1);
}

void droneGraph::set_endpoint(int x, int y, int z) {
	add_edge(out(idx(x, y, z, T - 1)), sink, 1);
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
std::vector<path*> droneGraph::find_paths(){
    std::vector<path*> paths;
    for(const edge& e:Graph[sink]){
        if(e.cap>=0){
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
    
            path* p_list=new path;
            for(point& p:P){
                p_list->add_node(p);
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

bool check_collision(std::vector<path*> paths){
    std::set<std::pair<int,point>> set;
    for(path* p:paths){
        int t=0;
        for(node* it=p->head;it->next!=NULL;it=it->next,t++){
            int x=it->p.x+it->next->p.x;
            int y=it->p.y+it->next->p.y;
            int z=it->p.z+it->next->p.z;
            if(set.count({t,{x,y,z}})){
                return true;
            }
            set.insert({t,{x,y,z}});
        }
    }
    return false;
}
int abss(int a){
    if(a<0)return -a;
    return a;
}
void remove_collision(std::vector<path*> paths){
    for(int D=3;D>=1;D--){
        std::map<std::pair<int,point>,std::vector<node*>> map;
        for(path* p:paths){
            int t=0;
            for(node* it=p->head;it->next!=NULL;it=it->next,t++){
                int x=it->p.x+it->next->p.x;
                int y=it->p.y+it->next->p.y;
                int z=it->p.z+it->next->p.z;
                int d=abss(it->p.x-it->next->p.x)+abss(it->p.y-it->next->p.y)+abss(it->p.z-it->next->p.z);
                if(D==d){
                    map[{t,{x,y,z}}].push_back(it);
                }
            }
        }
        for(auto& p : map){
            auto& col = p.second;
            while(col.size()>=2){
                node* one = col.back();
                col.pop_back();
                node* two = col.back();
                col.pop_back();
                std::swap(one->next,two->next);
            }
        }
    }
}
