/*Leia um valor X. Coloque este valor na primeira posição de um vetor N[100].
Em cada posição subsequente de N (1 até 99), coloque a metade do valor armazenado na posição anterior, conforme o exemplo abaixo. Imprima o vetor N.*/
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    double vet[100];

    cin >> vet[0];

    cout << setprecision(4) << fixed;

    cout << "N[" << 0 << "] = " << vet[0] << endl;

    for(int i = 1; i < 100; i++) {
        vet[i] = vet[i - 1] / 2;
        cout << "N[" << i << "] = " << vet[i] << endl;
    }

    return 0;
}
