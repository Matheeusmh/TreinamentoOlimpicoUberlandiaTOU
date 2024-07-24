#include <bits/stdc++.h>

using namespace std;

#define ii pair<int, int>
#define f first 
#define s second   

int main(void) {
    vector<vector<ii>> cidades;
    vector<int> m;
    int n, count = 0; cin >> n;

    m.push_back(n);


    while(n != 0) {
        vector<ii> residencias(n);

        for(int i = 0; i < n; i++) {
            int x, y; cin >> x >> y;

            residencias[i] = make_pair(x, y);
        }

        cidades.push_back(residencias);

        count++;
        cin >> n;

        m.push_back(n);
    }

    for(int i = 0; i < count; i++) {
        double soma = 0;
        cout << "Cidade# " << i + 1 << ":" << endl;
        for(int j = 0; j < m[i]; i++) {
            cout << cidades[i][j].f << "-" << cidades[i][j].s / cidades[i][j].f <<  " ";
            soma += cidades[i][j].s;
        }
        cout << endl;
        cout << setprecision(2) << fixed;
        cout << "Consumo medio: " << soma / m[i] << "m3 .";
        cout << endl;
        cout << endl;
    }

    return 0;
}
