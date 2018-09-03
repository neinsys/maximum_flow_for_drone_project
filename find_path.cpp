#include "flowgraph.h"
#include "find_path.h"
#include "Dinic.h"
#include "Mcmf.h"
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<stdlib.h>
#include<set>
#include<chrono>

#include<iostream>
using namespace std::chrono;

int minimaxDiff(std::vector<point>& start,std::vector<point>& end){
    int ret=1;
    for(const point& p:start){
        int diff=0x7fffffff;
        for(const point& q:end){
            diff=std::min(diff,std::max({abs(p.x-q.x),abs(p.y-q.y),abs(p.z-q.z)}));
        }
        ret=std::max(ret,diff);
    }
    return ret;
}

bool disjointCheck(std::vector<point>& points){
    std::set<point> set;
    for(point& p:points){
        if(set.count(p)){
            return false;
        }
        set.insert(p);
    }
    return true;
}

int getTimeofDroneGraph(std::vector<point>& start,std::vector<point>& end,int X,int Y,int Z){
    int N = std::min(start.size(),end.size());
    int left = minimaxDiff(start,end);
    int right = std::max({X,Y,Z,left});
    int t=0x7fffffff;
    while(left<=right){
        int mid=(left+right)/2;
        droneGraph tmp(X,Y,Z,mid);
        for(const point& p:start){
            tmp.set_startpoint(p.x,p.y,p.z);
        }
        for(const point& p:end){
            tmp.set_endpoint(p.x,p.y,p.z);
        }
        Dinic D(&tmp);
        int flow = D.flow();
        if(flow==N){
            if(t>mid){
                t=mid;
            }
            right=mid-1;
        }
        else{
            left=mid+1;
        }
    }
    return t;
}

analysis find_path_using_dinic(std::vector<point> start,std::vector<point> end,int X,int Y,int Z){
      if(start.size()!=end.size()){
            fprintf(stderr,"not match between start point and end point\n");
            return {};
      }
      if(!disjointCheck(start)){
          fprintf(stderr,"same point by start\n");
          return {};
      }
      if(!disjointCheck(end)){
          fprintf(stderr,"same point by end\n");
          return {};
      }
      system_clock::time_point start_t = system_clock::now();
      int t=getTimeofDroneGraph(start,end,X,Y,Z);
      system_clock::time_point end_t = system_clock::now();
      milliseconds Tcalc = duration_cast<milliseconds>(end_t-start_t);
      long T_calcTime=Tcalc.count();

      if(t==0x7fffffff){
            fprintf(stderr,"error : not find path\n");
            return {};
      }

      droneGraph G(X,Y,Z,t);
      for(const point& p:start){
          G.set_startpoint(p.x,p.y,p.z);
      }
      for(const point& p:end){
          G.set_endpoint(p.x,p.y,p.z,0);
      }
      Dinic D(&G);

      start_t = system_clock::now();
      int flow = D.flow();
      end_t = system_clock::now();
      milliseconds Pcalc = duration_cast<milliseconds>(end_t-start_t);
      long P_calcTime = Pcalc.count();

      std::vector<path*> paths = G.find_paths();
      auto collisions = get_collision(paths);
      remove_collision(paths);
      if(check_collision(paths)){
            fprintf(stderr,"error : exist collision\n");
      }
      return {paths,collisions,T_calcTime,P_calcTime,X,Y,Z};
}

analysis find_path_using_mcmf(std::vector<point> start,std::vector<point> end,int X,int Y,int Z){
    if(start.size()!=end.size()){
        fprintf(stderr,"not match between start point and end point\n");
        return {};
    }
    int T = std::max({X,Y,Z});
    droneGraph G(X,Y,Z,T);
    std::set<point> set;
    if(!disjointCheck(start)){
        fprintf(stderr,"same point by start\n");
        return {};
    }
    if(!disjointCheck(end)){
        fprintf(stderr,"same point by end\n");
        return {};
    }

    for(const point& p:start){
        G.set_startpoint(p.x,p.y,p.z);
    }
    for(const point& p:end){
        G.set_endpoint(p.x,p.y,p.z);
    }
    MCMF mcmf(&G);
    system_clock::time_point start_t = system_clock::now();
    int flow = mcmf.flow().first;
    system_clock::time_point end_t = system_clock::now();
    milliseconds Pcalc = duration_cast<milliseconds>(end_t-start_t);
    long P_calcTime = Pcalc.count();

    std::vector<path*> paths = G.find_paths();
    auto collisions = get_collision(paths);
 //   remove_collision(paths);
    if(check_collision(paths)){
        fprintf(stderr,"error : exist collision\n");
    }
    return {paths,collisions,0L,P_calcTime,X,Y,Z};
}

analysis find_path_using_mcmf_and_dinic(std::vector<point> start,std::vector<point> end,int X,int Y,int Z){
    if(start.size()!=end.size()){
        fprintf(stderr,"not match between start point and end point\n");
        return {};
    }
    if(!disjointCheck(start)){
        fprintf(stderr,"same point by start\n");
        return {};
    }
    if(!disjointCheck(end)){
        fprintf(stderr,"same point by end\n");
        return {};
    }
    system_clock::time_point start_t = system_clock::now();
    int t=getTimeofDroneGraph(start,end,X,Y,Z);
    system_clock::time_point end_t = system_clock::now();
    milliseconds Tcalc = duration_cast<milliseconds>(end_t-start_t);
    long T_calcTime=Tcalc.count();

    droneGraph G(X,Y,Z,t);
    for(const point& p:start){
        G.set_startpoint(p.x,p.y,p.z);
    }
    for(const point& p:end){
        G.set_endpoint(p.x,p.y,p.z,0);
    }
    for(int x=0;x<X;x++){
        for(int y=0;y<Y;y++){
            for(int z=0;z<Z;z++){
                G.set_endpoint(x,y,z,(t+1)*100);
            }
        }
    }
    MCMF mcmf(&G);

    start_t = system_clock::now();
    int flow = mcmf.flow().first;
    end_t = system_clock::now();
    milliseconds Pcalc = duration_cast<milliseconds>(end_t-start_t);
    long P_calcTime = Pcalc.count();


    std::vector<path*> paths = G.find_paths();
    auto collisions = get_collision(paths);
    //   remove_collision(paths);
    if(check_collision(paths)){
        fprintf(stderr,"error : exist collision\n");
    }
    return {paths,collisions,T_calcTime,P_calcTime,X,Y,Z};
}