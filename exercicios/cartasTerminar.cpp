#include <bits/stdc++.h>

using namespace std;


int main(void) {
    int n; cin >> n;
    vector<vector<int>> descartes;
    int auxDescartes = 0;
    vector<int> cartasSalvas;
    int cartasSalvasCount = 0;
    int descartesCount = 0;

    while(n > 0) {
        stack<int> cartas;
        stack<int> aux;
        int topo;
        
        descartesCount = n - 1;

        for(int i = n - 1; i >= 0; i--) {
            cartas.push(i + 1);
        }

        while(!cartas.empty()) {
            int x = cartas.top();
            cartas.pop();
            descartes[auxDescartes].push_back(x);
            n--;
            topo = cartas.top();
            cartas.pop();
            while(n > 0) {
                int u = cartas.top();
                cartas.pop();
                aux.push(u);
            }

            cartas.push(topo);

            while(!aux.empty()) {
                int u = aux.top();
                aux.pop();
                cartas.push(u);
            }

            if(cartas.size() == 1) {
                cartasSalvas.push_back(cartas.top());
                cartasSalvasCount++;
                break;
            }
        }
        cin >> n;
        auxDescartes = 0;
    }

    for(int i = 0; i < cartasSalvasCount; i++) {
        cout << "Discarded cards: ";
        for(int j = 0; j < descartesCount; j++) {
            cout << descartes[i][j] << " ";
        }
        cout << "\nRemaining card: " << cartasSalvas[i] << endl;
    }

    return 0;
}