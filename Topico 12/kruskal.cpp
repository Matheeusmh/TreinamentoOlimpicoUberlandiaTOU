#include <bits/stdc++.h>

using namespace std;

vector<int> sz, id;
vector<int> custos;

int find(int p) {
    return id[p] = (id[p] == p ? p : find(id[p]));
}

void uni(int p, int q) {
    p = find(p), q = find(q);
    if(p == q) return;
    if(sz[p] > sz[q]) swap(p, q);
    id[p] = q;
    sz[p] += sz[q];
}

 int main(void) {
    int total;

    while(1) {
        int n, m, c = 0; cin >> n >> m;
        vector<tuple<int, int, int>> g;

        if(n == 0 && m == 0) {
            break;
        }

        total = 0;
        
        id = vector<int> (n);
        sz = vector<int> (n, 1);

        iota(id.begin(), id.end(), 0);

        for(int i = 0; i < m; i++) {
            int x, y, z; cin >> x >> y >> z;

            total += z;

            g.emplace_back(z, x, y);
        }

        sort(g.begin(), g.end());

        for(auto [z, x, y] : g) {
            if(find(y) != find(x)) {
                uni(y, x);
                c += z;
            }
        }

        cout << total - c << endl;    
    }

    return 0;
 }
