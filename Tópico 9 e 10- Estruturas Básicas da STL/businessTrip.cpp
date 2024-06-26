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
    int k, compridas = 0, soma = 0;
    vector<int> meses(12);

    cin >> k;

    for(int i = 0; i < 12;i++) {
        int valor;

        cin >> valor;

        meses.push_back(valor);
    }

    sort(meses.begin(), meses.end(), greater<>());

    for(auto e : meses) {
        soma += e;
        compridas++;
        if(soma >= k) {
            if(k == 0) {
                compridas = 0;
            }
            break;
        }
    }
    
    if(soma < k) {
        cout << -1 << endl;
    }
    else {
        cout << compridas << endl;
    }

    return 0;
}
