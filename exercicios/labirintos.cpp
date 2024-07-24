#include <bits/stdc++.h>

using namespace std;

#define f first 
#define s second

const int MAX = 49;

vector<int> dist;

int dfs(int x, vector<vector<int>>& adj, vector<bool>& visitado) {
    int caminho = 0;
    stack<int> q;
    q.push(x);
    
    visitado[x] = true;

    while(!q.empty()) {
        int u = q.top();
        q.pop();

        for(auto e : adj[u]){
            if(!visitado[e]) {
                visitado[e] = true;
                q.push(e);
                caminho++;
            }
        }
    }

    return caminho;
}

int main(void) {
    int t, n, v, a, aux = 0; cin >> t;

    dist.assign(t, 0);
    
    while(t > 0) {
        cin >> n >> v >> a;
        int raizV = sqrt(v);        
        vector<bool> visitado(v, false);
        vector<vector<int>> adj(raizV);


        for(int i = 0; i < a; i++) {
            int x, y; cin >> x >> y;

            adj[x].push_back(y);
        }

        t--;

        dist[aux++] = dfs(n, adj, visitado);
    }

    for(int i = 0; i < aux; i++) {
        cout << dist[i] << endl;
    }

    return 0;
}
