/*Faça um programa para verificar se uma matriz 3x3 forma um quadrado mágico.
Quadrado Mágico é uma tabela quadrada igual a intersecção de números em que a soma de cada coluna, de cada linha e das duas diagonais são iguais*/
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int matriz[3][3], somaLinha = 0, somaColuna = 0, somaDiagonal = 0, compara = 0, count = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            cin >> matriz[i][j];

            somaLinha += matriz[i][j];

            if(i == j) {
                somaDiagonal += matriz[i][j];
            }
        }
        if(i == 0) {
            compara = somaLinha;
        }
        else {
            if(compara != somaLinha) {
                count++;
            }
            else if(i == 2) {
                for(int j = 0; j < 3; j++) {
                    somaColuna += matriz[j][i];
                }
                if(compara != somaDiagonal || compara != somaColuna) {
                    count++;
                }
                else {
                    somaDiagonal = (matriz[0][2]) + (matriz[1][1]) + (matriz[2][0]);
                    if(compara != somaDiagonal) {
                        count++;
                    }
                }
            }
        }
        somaLinha = 0;
    }

    if(count == 0) {
        cout << "SIM" << endl;
    }
    else {
        cout << "NAO" << endl;
    }

    return 0;
}
