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
    int p; cin >> p;

    vector<pair<string, string>> manipular(p);
    vector<string> original(p);


    for(int i = 0; i < p; i++) {
        string palavra;

        cin >> palavra;

        original[i] = palavra;

        transform(palavra.begin(), palavra.end(), palavra.begin(), :: tolower);

        manipular[i].f = palavra;
        manipular[i].s = palavra;
        sort(manipular[i].s.begin(), manipular[i].s.end());
    }

    int aux = 0;

    for(auto e : manipular) {
        cout << original[aux++] << ": ";
        if(e.f == e.s) {
            cout << "O" << endl;
        }
        else {
            cout << "N" << endl;
        }
    }

    return 0;
}