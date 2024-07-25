#include <bits/stdc++.h>

using namespace std;

const int MAX = 49;

vector<vector<int>> adj;
vector<bool> visitado;
vector<int> dist;

void dfs(int n) {
    int count = 0;
    stack<int> s;
    s.push(n);
    visitado[n] = true;

    while(!s.empty()) {
        int u = s.top();
        s.pop();
        
        for(auto e : adj[u]) {
            if(!visitado[e]) {
                visitado[e] = true;
                s.push(e);
                count++;
            }
        }
    }

    dist.push_back(count * 2);
    count = 0;
}

int main(void) {
    int t; cin >> t;

    for(int i = 0; i < t; i++) {
        int n, v, a; cin >> n >> v >> a;
        visitado.assign(v, false);
        adj.assign(v, vector<int>(0));

        for(int j = 0; j < a; j++) {
            int x, y; cin >> x >> y;
            adj[x].push_back(y);
            adj[y].push_back(x);
        }

        dfs(n);
    }

    for(auto e : dist) {
        cout << e << endl;
    }

    return 0;
}
