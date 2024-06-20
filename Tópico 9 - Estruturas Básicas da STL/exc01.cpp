/*Escreva um programa explorando STL que declara um vetor de inteiros. Armazene no
vetor os 5 valores informados e então imprima o vetor de elementos com o comando
cout.*/
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    vector<int> vetor;
    int valor;
    
    for(int i = 0; i < 5; i++) {
        cin >> valor;
        vetor.push_back(valor);
    }

    for(auto e : vetor) {
        cout << e << " ";
    }

    return 0;
}
