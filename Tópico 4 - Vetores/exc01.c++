/*Faça um programa que leia um vetor N[20]. 
Troque a seguir, o primeiro elemento com o último, o segundo elemento com o penúltimo, etc., até trocar o 10º com o 11º. Mostre o vetor modificado.*/
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int vet[20], fim = 19, aux = 0;

    for(int i = 0; i < 20; i++) {
        cin >> vet[i];
    }

    for(int i = 0; i < 10; i++) {
        aux = vet[fim];
        vet[fim] = vet[i];
        vet[i] = aux;
        fim--;
    }

    for(int i = 0; i < 20; i++) {
        cout << "N[" << i << "] = " << vet[i] << endl;
    }

    return 0;
}
