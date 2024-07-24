#include <bits/stdc++.h>

using namespace std;

#define f first 
#define s second

const int MAX = 200000;

vector<pair<int, int>> testes;
vector<vector<int>> adj;
vector<bool> visitado;

void dfs(int x) {
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

    cout << caminho << endl;
}

int main(void) {
    int t, n, v, a; cin >> t;

    testes.assign(t, {0, 0});

    while(t > 0) {
        cin >> n >> v >> a;

        adj.assign(v, vector<int>(v, 0));
        visitado.assign(v, false);


        for(int i = 0; i < a; i++) {
            int x, y; cin >> x >> y;

            adj[x].push_back(y);
        }

        dfs(n);
    }


    return 0;
}
