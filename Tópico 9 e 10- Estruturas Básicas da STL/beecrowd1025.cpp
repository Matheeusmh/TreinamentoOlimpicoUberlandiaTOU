#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, q, caso = 1;

    while(1) {
        cin >> n >> q;

        if(n == 0 && q == 0) break;

        vector<int> elementos(n);

        for(int i = 0; i < n; i++) {
            cin >> elementos[i];
        }

        sort(elementos.begin(), elementos.end());

        vector<int> testes(q);
        vector<bool> achado(q, false);

        for(int i = 0; i < q; i++) {
            cin >> testes[i];
        }

        
        for(int i = 0; i < q; i++) {
            if(i == 0) {
                cout << "CASE# " << caso++ << ":" << endl;
            }

            for(int j = 0; j < n; j++) {
                if(testes[i] == elementos[j]) {
                    cout << testes[i] << " found at " << j + 1 << endl;
                    achado[i] = true;
                    break;
                }
            }

            if(!achado[i]) {
                cout << testes[i] << " not found" << endl;
            }    
        }
    }

    return 0;
}