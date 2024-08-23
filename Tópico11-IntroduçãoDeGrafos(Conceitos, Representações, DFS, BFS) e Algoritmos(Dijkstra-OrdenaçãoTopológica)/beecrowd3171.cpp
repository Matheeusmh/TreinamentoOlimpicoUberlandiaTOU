#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e2;

vector<vector<int>> adj(MAX);
vector<bool> visit(MAX, false);

int dfs(int x) {
    stack<int> q;
    q.push(x);
    
    while(!q.empty()) {
        int u = q.top();
        q.pop();

        for(auto e : adj[u]) {
            if(!visit[e]) {
                q.push(e);
            }
        }
    }
}

int main(void) {
    int n, l; cin >> n >> l;

    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b; a--; b--;
        adj[a].push_back(b);
    }

    dfs(0);

    return 0;
}