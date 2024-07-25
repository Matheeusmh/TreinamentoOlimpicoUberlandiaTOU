#include <bits/stdc++.h>

using namespace std;

#define ii pair<int, int>
#define f first 
#define s second

vector<vector<ii>> adj;
vector<int> dist;
vector<bool> visitado;

void dijkstra(int n) {
    dist[n] = 0;
    priority_queue<ii, vector<ii>, greater<ii>> q;
    q.push({0, n});
    visitado[n] = true;

    while(!q.empty()) {
        int u = q.top().f;
        
    }
}

int main(void) {
    int n, m; cin >> m >> n;

    while(n > 0 && m > 0) {
        adj.assign(m, vector<ii> (0, {0, 0}));
        dist.assign(m, 0);
        visitado.assign(m, false);
        
        for(int i = 0; i < n; i++) {
            int x, y, z; cin >> x >> y >> z;

            adj[x].push_back(make_pair(y, z));
            adj[y].push_back(make_pair(x, z));
        }

        dijkstra(0);
    }
}