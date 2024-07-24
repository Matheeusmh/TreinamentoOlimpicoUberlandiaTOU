#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, m; cin >> n;
    unordered_map<string, double> frutas;
    vector<double> valores(n, 0);

    for(int count = 0; count < n; count ++) {
        cin >> m;

        for(int i = 0; i < m; i++) {
            string nome; cin >> nome;
            double valor; cin >> valor;

            frutas[nome] = valor;
        }

        int u; cin >> u;
        vector<pair<string, int>> compra(u);

        for(int i = 0; i < u; i++) {
            cin >> compra[i].first >> compra[i].second;
        }

        for(auto e : compra) {
            if(frutas.find(e.first) != frutas.end()) {
                valores[count] += frutas[e.first] * e.second;
            }
        }
    }

    cout << setprecision(2) << fixed;

    for(int i = 0; i < n; i++) {
        cout << "R$" << valores[i] << endl;
    }

    return 0;
}

