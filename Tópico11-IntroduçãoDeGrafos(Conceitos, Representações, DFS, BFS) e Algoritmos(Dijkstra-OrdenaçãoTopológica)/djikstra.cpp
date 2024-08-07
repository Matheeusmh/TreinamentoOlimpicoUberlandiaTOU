#include <bits/stdc++.h>

using namespace std;

#define f first 
#define s second
#define ii pair<int, int>

const int INF = 1e9;

vector<ii> adj[10];

vector<bool> visitado(10, false);
vector<int> distancia(10, INF);

void djikstra(int s) {
    distancia[s] = 0;
    priority_queue<ii, vector<ii>, greater<ii>> pq;
    pq.push({0, s});

    while(!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        if(visitado[u]) {
            visitado[u] = true;
        }

        for(auto e : adj[u]) {
            int v = e.f, w = e.s;

            if(distancia[v] > distancia[u] + w) {
                distancia[v] = distancia[u] + w;
                pq.push({distancia[v], v});
            }
        }
    }

    for(int i = 0; i < 10; i++) {
        cout << i << " = " << distancia[i];
    }
}

int main(void) {
    for(int i = 0; i < 10; i++) {
        int x, y, valor; cin >> x >> y >> valor;
        adj[x].push_back(make_pair(y, valor)); 
    }

    djikstra(0);

    return 0;
}
