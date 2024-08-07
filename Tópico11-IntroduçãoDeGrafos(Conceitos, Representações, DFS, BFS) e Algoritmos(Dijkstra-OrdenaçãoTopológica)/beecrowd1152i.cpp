#include <bits/stdc++.h>

using namespace std;

#define ii pair<int, int>
#define f first 
#define s second

const int INF = 1e9;
const int MAX = 200000;

vector<ii> adj[MAX];
vector<int> dist;
vector<bool> visitado;

vector<int> todosTestes;

void dijkstra(int s) {
    dist[s] = 0;
    priority_queue<ii, vector<ii>, greater<ii>> pq;
    pq.push({0, s});

    while(!pq.empty()) {
        int u = pq.top().s;
        pq.pop();

        if(!visitado[u]) {
            visitado[u] = true;
        }

        for(auto e : adj[u]) {
            int v = e.f, w = e.s;

            if(dist[v] > w) {
                dist[v] = w;
                pq.push({dist[v], v});
            }
        }
    }

    for(auto e : dist) {
        cout << e << " ";
    }
}

int main(void) {
    int m, n; cin >> m >> n;

    while(m != 0 && n != 0) {
        dist.assign(m, INF);
        visitado.assign(m, false);

        for(int i = 0; i < n; i++) {
            int x, y, peso; cin >> x >> y >> peso;

            adj[x].push_back(make_pair(y, peso));
            adj[y].push_back(make_pair(x, peso));
        }

        dijkstra(0);

        cout << endl;
        cin >> m >> n;
        dist.clear();
        visitado.clear();
    }

    return 0;
}
