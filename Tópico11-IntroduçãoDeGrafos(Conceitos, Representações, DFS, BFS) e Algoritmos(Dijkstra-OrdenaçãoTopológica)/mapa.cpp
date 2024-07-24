#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e2 * 10;

#define f first 
#define s second

int l, c;
vector<vector<char>> posicao(MAX);
bool visitado[MAX][MAX];
vector<pair<int, int>> mov = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

pair<int, int> bfs(pair<int, int> u) {
    queue<pair<int, int>> q;
    q.push(u);
    visitado[u.f][u.s] = true;
    pair<int, int> v = q.front();

    while(!q.empty()) {
        q.pop();

        for(auto e : mov) {
            e.f + v.f; e.s + e.s;
            if(posicao[e.f + v.f][e.s + e.s] == 'H' && !visitado[e.f + v.f][e.s + e.s]) {
                q.push(e);
                visitado[e.f + v.f][e.s + e.s] = true;
            }
        }
    }

    return v;
}

int main(void) {
    cin >> l >> c;
    pair<int, int> inicial;

    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            cin >> posicao[i][j];
        }
    }

    for(int i = 0; i < l; i++) {
        for(int j = 0; j < c; j++) {
            if(posicao[i][j] == 'o') {
                inicial = make_pair(i, j);
            }
        }
    }

    pair<int, int> final = bfs(inicial);

    cout << final.f + 1<< " " << final.s  + 1<< endl;

    return 0;
}
