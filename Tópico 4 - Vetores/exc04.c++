/*Neste problema você deverá ler 15 valores colocá-los em 2 vetores conforme estes valores forem pares ou ímpares.
Só que o tamanho de cada um dos dois vetores é de 5 posições. Então, cada vez que um dos dois vetores encher, você deverá imprimir todo o vetor e utilizá-lo novamente para os próximos números que forem lidos. Terminada a leitura, deve-se imprimir o conteúdo que restou em cada um dos dois vetores, imprimindo primeiro os valores do vetor impar. Cada vetor pode ser preenchido tantas vezes quantas for necessário.*/
#include <iostream>

using namespace std;

int main(void) {
    int vet[15], vetPar[5], vetImpar[5], countPar = 0, countImpar = 0;

    for(int i = 0; i < 15; i++) {
        cin >> vet[i];

        if(vet[i] % 2 == 0) {
            vetPar[countPar] = vet[i];
            countPar++;
            if(countPar == 5) {
                for(int j = 0; j < 5; j++) {
                    cout << "par[" << j << "] = " << vetPar[j] << endl;
                }
                countPar = 0;
            }
        }
        else {
            vetImpar[countImpar] = vet[i];
            countImpar++;
            if(countImpar == 5) {
                for(int j = 0; j < 5; j++) {
                    cout << "impar[" << j << "] = " << vetImpar[j] << endl;
                }
                countImpar = 0;
            }
        }
    }
    for(int i = 0; i < countImpar; i++) {
        cout << "impar[" << i << "] = " << vetImpar[i] << endl;
    }
    for(int i = 0; i < countPar; i++) {
        cout << "par[" << i << "] = " << vetPar[i] << endl;
    }

    return 0;
}
