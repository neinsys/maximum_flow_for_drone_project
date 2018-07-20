#ifndef __FIND_PATH_H__
#define __FIND_PATH_H__

#include "flowgraph.h"

analysis find_path_using_dinic(std::vector<point> start,std::vector<point> end,int X,int Y,int Z);
analysis find_path_using_mcmf(std::vector<point> start,std::vector<point> end,int X,int Y,int Z);
analysis find_path_using_mcmf_and_dinic(std::vector<point> start,std::vector<point> end,int X,int Y,int Z);

#endif
