#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, q; cin >> n >> q;
    vector<vector<pair<int, int>>> consultasGerais;
    int count = 0;

    while(n > 0 && q > 0) {
        vector<int> marmores(n);
        vector<int> consultas(q);
        vector<bool> achado(q);
        consultasGerais.assign(q, vector<pair<int, int>>());

        for(int i = 0; i < n; i++) {
            cin >> marmores[i];
        }

        sort(marmores.begin(), marmores.end());

        for(int i = 0; i < q; i++) {
            bool encontrado = false;
            int aux = 0;
            cin >> consultas[i];

            for(auto e : marmores) {
                if(consultas[i] == e) {
                    consultasGerais[count].push_back(make_pair(consultas[i], aux + 1));
                    encontrado = true;
                    break;
                }
                aux++;
            }

            if(!encontrado) {
                consultasGerais[count].push_back(make_pair(consultas[i], -1));
            }
        }
        count++;
        cin >> n >> q;
    }

    for(int i = 1; i <= count; i++) {
        cout << "CASE# " << i << ":" << endl;
        for(auto e : consultasGerais[i - 1]) {
            if(e.second != -1) {
                cout << e.first << " found at " << e.second << endl;
            }
            else {
                cout << e.first << " not found" << endl;
            }
        }
    }

    return 0;
}