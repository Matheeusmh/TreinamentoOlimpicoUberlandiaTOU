#include <bits/stdc++.h>

using namespace std;

#define pb push_back
#define pp pop_back

const int MAX = 1e5 * 10;

vector<vector<int>> adj(MAX);
vector<bool> visitado(-1 , MAX);

void bfs(int s) {
    stack<int> q;

    q.push(s);

    while(!q.empty()) {
        int u = q.top();
        q.pop();

        cout << u << " ";

        for(auto e : adj[u]) {
            if(!visitado[e]) {
                q.push(e);
                visitado[e] = true;
            }
        }
    }

}

int main(void) {
    int n; cin >> n;

    for(int i = 0; i < n; i++) {
        int a, b; cin >> a >> b; --a; --b;

        adj[a].pb(b);
    }

    bfs(0);

    return 0;
}
