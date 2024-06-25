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
    int n, resposta = 0;
    vector<pair<int, int>> botas(61, {0, 0});

    cin >> n;

    for(int i = 0; i < n; i++) {
        int tamanho;
        char lado;

        cin >> tamanho >> lado;

        if(lado == 'E')
            botas[tamanho].f++;
        else 
            botas[tamanho].s++;
    }
    
    for(auto e : botas)
        resposta += min(e.first, e.second);

    cout << resposta << endl;

    return 0;
}
