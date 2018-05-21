#ifndef __PUSH_RELABEL_H__
#define __PUSH_RELABEL_H__
#include "flowgraph.h"

std::pair<flowGraph, int> push_relabel_cuda(flowGraph graph_h);


#endif