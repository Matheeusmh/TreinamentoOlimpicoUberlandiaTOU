#include <bits/stdc++.h>

using namespace std;

int remove(stack<int>& conjuntoInteiros, int k) {
    stack<int> aux;
    bool encontrado = false;

    while(!conjuntoInteiros.empty()) {
        if(conjuntoInteiros.top() == k) {
            conjuntoInteiros.pop();
            encontrado = true;
            break;
        }
        aux.push(conjuntoInteiros.top());
        conjuntoInteiros.pop();
    }
    while(!aux.empty()) {
        conjuntoInteiros.push(aux.top());
        aux.pop();
    }

    if(encontrado) {
        return 1;
    }   
    else {
        cout << "Nao encontrado!" << endl;
        return 0;
    }
}

int main(void) {
    stack<int> conjuntoInteiros, imprimir;
    int n, k;

    cin >> n >> k;

    for(int i = 0; i < n; i++) {
        int valor;

        cin >> valor;

        conjuntoInteiros.push(valor);
    }

    if(remove(conjuntoInteiros, k)) {
        cout << "Removido!" << endl;
        while(!conjuntoInteiros.empty()) {
            imprimir.push(conjuntoInteiros.top());
            conjuntoInteiros.pop();
        }

        while(!imprimir.empty()) {
            cout << imprimir.top() << " ";
            imprimir.pop();
        }
    }
    else {
        cout << "Nao removido!" << endl;
    }


    return 0;
}