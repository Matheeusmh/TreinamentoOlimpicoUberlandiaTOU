#include <bits/stdc++.h>

using namespace std;

#define _ ios_base :: sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first 
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
    vector<int> v, vOrdenado;
    map<int, int> posicao;
    int n;

    cin >> n;


    for(int i = 0; i < n; i++) {
        int x;
        cin >> x;

        v.push_back(x);
        vOrdenado.push_back(x);
    }

    sort(vOrdenado.begin(), vOrdenado.end());

    for(int i = 0; i < n; i++) {
        posicao[vOrdenado[i]] = i; 
    }

    for(int i = 0; i < n; i++) {
        for(auto y : posicao) {
            if(v[i] == y.f) {
                cout << y.s << " ";
            }
        }
    }

    return 0;
}
