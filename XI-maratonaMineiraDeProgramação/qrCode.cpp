#include <bits/stdc++.h>

using namespace std;

#define f first 
#define s second

int main(void) {
    int n, p; cin >> n >> p;\
    vector<int> entradas(n);
    vector<pair<int, string>> ordem(p);
    bool acertou = true;

    for(int i = 0; i < n; i++) {
        cin >> entradas[i];
    }

    for(int i = 0; i < n; i++) {
        cin >> ordem[i].f >> ordem[i].s;
    }

    sort(ordem.begin(), ordem.end());

    for(int i = 0; i < n; i++) {
        acertou = true;
        
        for(int l = p - 1; l >= p - 1 - entradas[i]; l--) {
            if(ordem[l].f == i + 1) {
                break;
            }
            else if(l == p - 1 - entradas[i]) {
                acertou = false;
            }
        }
    }

    return 0;
}