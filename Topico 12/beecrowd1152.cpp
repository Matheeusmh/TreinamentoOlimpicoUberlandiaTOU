#include<bits/stdc++.h>

using namespace std;

vector<int> id, sz;

int find(int x) {
    return id[x] = (id[x] == x ? x : find(id[x]));
}

int uni(int x, int y) {
    x = find(x), y = find(y);
    if(x == y) return;
    if(sz[x] > sz[y]) swap(x, y);
    id[x] = y;
    sz[y] += sz[x];

}

int main(void) {
    int m, n; cin >> m >> n;

    while(m != 0 && n != 0) {
        vector<tuple<int, int, int>> adj;
        id.resize(n); sz.resize(n);

        for(int i = 0; i < n; i++) {
            int x, y, z; cin >> x >> y >> z;

            adj.push_back(make_tuple(x, y, z));
            id[i] = i; sz[i] = 1;
        }

        sort(adj.begin(), adj.end());

    }

    return 0;
}
