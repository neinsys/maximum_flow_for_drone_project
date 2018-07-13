//
// Created by nein on 18. 7. 12.
//

#include "Mcmf.h"
#include <assert.h>
#include <queue>
#include<stdio.h>



using std::vector;
using std::pair;


MCMF::MCMF(flowGraph* G) :G(G),source(G->source), sink(G->sink) {
    dist.resize(G->Graph.size());
    chk.resize(G->Graph.size());
    from.resize(G->Graph.size(), { -1,-1 });
    level.resize(G->Graph.size());
    iter.resize(G->Graph.size());
}

void MCMF::getPotential() {
    std::fill(dist.begin(), dist.end(), INF);
    std::fill(chk.begin(), chk.end(), false);
    std::fill(from.begin(), from.end(), std::make_pair(-1, -1));
    std::fill(level.begin(), level.end(), INF);
    std::queue<int> que;
    que.push(source);
    dist[source] = 0;
    level[source] = 0;
    while (!que.empty()) {
        int idx = que.front();
        que.pop();
        chk[idx] = false;
        for (int i = 0; i < G->Graph[idx].size(); i++) {
            auto& e = G->Graph[idx][i];
            int to = G->Graph[idx][i].to;
            if (e.cap > 0 && dist[to] > dist[idx] + e.cost) {
                dist[to] = dist[idx] + e.cost;
                level[to] = level[idx] + 1;
                from[to] = { idx,i };
                if (!chk[to]) {
                    chk[to] = true;
                    que.push(to);
                }
            }
        }
    }
    pi = dist;
}
bool MCMF::dijkstra() {

    std::fill(dist.begin(), dist.end(), INF);
    std::fill(chk.begin(), chk.end(), false);
    std::fill(from.begin(), from.end(), std::make_pair(-1, -1));
    std::fill(level.begin(), level.end(), INF);
    int n = dist.size();
    dist[source] = 0;
    using node = pair<int, int>;
    std::priority_queue<node, vector<node>, std::greater<node>> heap;
    heap.emplace(dist[source], source);
    while (!heap.empty()) {
        int idx = heap.top().second;
        heap.pop();
        if (chk[idx])continue;
        chk[idx] = true;

        for (int i = 0; i < G->Graph[idx].size(); i++) {
            auto& e = G->Graph[idx][i];
            if (e.cap > 0 && dist[e.to] > dist[idx] + e.cost - pi[e.to] + pi[idx]) {
                assert(!chk[e.to]);
                dist[e.to] = dist[idx] + e.cost - pi[e.to] + pi[idx];
                level[e.to] = level[idx]+1;
                from[e.to] = { idx,i };
                heap.emplace(dist[e.to], e.to);
            }
        }


    }
    int idx = sink;
    int cap = INF;
    int cost = dist[sink] + pi[sink] - pi[source];
    if (dist[sink] == INF) {
        return false;
    }
    return true;
}
int MCMF::dfs(int v, int t, int f) {
    if (v == t) return f;
    for (int &i = iter[v]; i < G->Graph[v].size(); i++) {
        auto &e = G->Graph[v][i];
        if (e.cap > 0 && dist[v] + e.cost - pi[e.to] + pi[v] == 0 && level[v] < level[e.to]) {
            int d = dfs(e.to, t, std::min(f, e.cap));
            if (d > 0) {
                e.cap -= d;
                G->Graph[e.to][e.rev].cap += d;
                return d;
            }
        }
    }
    return 0;
}


pair<int, int> MCMF::flow() {
    int total_cap = 0;
    int total_cost = 0;

    getPotential();
    while (dijkstra()) {
        std::fill(iter.begin(), iter.end(), 0);
        int f;
        while ((f = dfs(source, sink, INF)) > 0) {
            total_cap += f;
            total_cost += f*(dist[sink] + pi[sink] - pi[source]);
        }
        for (int i = 0; i < dist.size(); i++) {
            if (dist[i] < INF)
                pi[i] += dist[i];
        }
    }
    return{ total_cap,total_cost };
}
