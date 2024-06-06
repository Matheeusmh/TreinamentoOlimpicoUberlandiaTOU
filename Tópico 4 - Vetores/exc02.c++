/*Faça um programa que leia um vetor X[10].
Substitua a seguir, todos os valores nulos e negativos do vetor X por 1. Em seguida mostre o vetor X.*/
#include <iostream>

using namespace std;

int main(void) {
    int vet[10];

    for(int i = 0; i < 10; i++) {
        cin >> vet[i];

        if(vet[i] <= 0) {
            vet[i] = 1;
        }
    }

    for(int i = 0; i < 10; i++) {
        cout << "X[" << i << "] = " << vet[i] << endl;
    }

    return 0;
}
