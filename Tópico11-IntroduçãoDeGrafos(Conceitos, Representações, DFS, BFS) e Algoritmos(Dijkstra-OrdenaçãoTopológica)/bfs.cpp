#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5 * 10;

#define fr front
#define p pop
#define pb push_back

vector<vector<int>> adj(MAX);
vector<bool> verificado(MAX);

void bfs(int u) {
    queue<int> q;

    q.push(u);

    while(!q.empty()) {
        int v = q.fr();
        q.p();

        verificado[v] = true;

        cout << v << " ";

        for(auto e : adj[v]) {
            if(!verificado[e]) {
                q.push(e);
            }
        }
    }
}

int main(void) {
    verificado.assign(MAX, false);
    int n; cin >> n;

    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b; --a; --b;

        adj[a].pb(b);
    }

    bfs(0);

    return 0;
}
