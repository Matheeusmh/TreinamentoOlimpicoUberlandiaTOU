#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e5+10;

vector<vector<int>> g(MAX);
vector<bool> vis(MAX);

dfs(int v) {
    vis[v] = true;

    for(auto w : g[v]) {
        if(!vis[w]) {
            dfs(w);
        }
    }
}
int main(void) {

    return 0;
}