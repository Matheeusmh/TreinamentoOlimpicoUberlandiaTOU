#include <bits/stdc++.h>

using namespace std;

#define f first 
#define s second

int main(void) {
    int n; cin >> n;
    vector<vector<int>> descarte;
    vector<int> topo;
    int countTeste = 0;

    while(n > 0) {
        queue<int> pilhaDeCartas;
        vector<int> pilhaDeDescarte;
        int topoPilha;

        for(int i = 1; i < n + 1; i++) {
            pilhaDeCartas.push(i);
        }

        while(pilhaDeCartas.size() > 1) {
            pilhaDeDescarte.push_back(pilhaDeCartas.front());
            pilhaDeCartas.pop();
            topoPilha = pilhaDeCartas.front();
            pilhaDeCartas.pop();
            pilhaDeCartas.push(topoPilha);
        }

        descarte.push_back(pilhaDeDescarte);
        topo.push_back(topoPilha);

        countTeste++;
        cin >> n;
    }

    for(int i = 0; i < countTeste; i++) {
        cout << "Discarded cards: ";
        for(auto e : descarte[i]) {
            if(e == 1) {
                cout << e;
            }
            else {
                cout << ", " << e;
            }
        }
        cout << endl << "Remaining card: ";
        cout << topo[i] << endl;
    }

    return 0;
}