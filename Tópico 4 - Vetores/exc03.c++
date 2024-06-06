/*Faça um programa que leia um vetor A[100]. No final, mostre todas as posições do vetor que armazenam um valor menor ou igual a 10 e o valor armazenado em cada uma das posições.*/
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    double vet[100];

    for(int i = 0; i < 100; i++) {
        cin >> vet[i];
    }

    cout << setprecision(1) << fixed;
    for(int i = 0; i < 100; i++) {
        if(*(vet + i) <= 10) {
            cout << "A[" << i << "] = " << *(vet + i) << endl;
        }
    }

    return 0;
}
