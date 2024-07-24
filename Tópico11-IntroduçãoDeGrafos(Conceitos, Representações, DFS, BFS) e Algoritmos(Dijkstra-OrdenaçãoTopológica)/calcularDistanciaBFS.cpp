#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e3+10;

vector<bool> vis(MAX);
vector<vector<int>> g(MAX);
vector<int> dist(MAX, -1);

void bfs (int s) {
    queue<int> q;
    q.push(s), vis[s] = 1;

    dist[s] = 0;
    while(!q.empty()){
        int v = q.front(); q.pop();
        for(auto u : g[v].size()) if(!vis[u]) {
            dist[u] = dist[v] + 1;
            q.push(u);
        }
    }
}