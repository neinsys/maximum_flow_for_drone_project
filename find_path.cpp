#include "flowgraph.h"
#include "find_path.h"
#include "Dinic.h"
#include<stdio.h>
#include<algorithm>
#include<math.h>
#include<stdlib.h>
#include<iostream>
int minimaxDiff(std::vector<point>& start,std::vector<point>& end){
    int ret=0;
    for(const point& p:start){
        int diff=0x7fffffff;
        for(const point& q:end){
            diff=std::min(diff,std::max({abs(p.x-q.x),abs(p.y-q.y),abs(p.z-q.z)}));
        }
        ret=std::max(ret,diff);
    }
    return ret;
}

std::vector<path*> find_path(std::vector<point> start,std::vector<point> end,int X,int Y,int Z){
      if(start.size()!=end.size()){
            fprintf(stderr,"not match between start point and end point\n");
            return {};
      }
      int N = start.size();
      int left = minimaxDiff(start,end);
      int right = std::max({X,Y,Z,left});
      int t=0x7fffffff;
      droneGraph G;
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
                    G=tmp;
                }
                right=mid-1;
            }
            else{
                left=mid+1;
            }
      }
      if(t==0x7fffffff){
            fprintf(stderr,"error : not find path\n");
            return {};
      }
      std::vector<path*> paths = G.find_paths();
      remove_collision(paths);
      if(check_collision(paths)){
            fprintf(stderr,"error : exist collision\n");
      }
      return paths;
}
