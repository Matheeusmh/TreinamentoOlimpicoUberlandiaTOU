/*beecrowd | 1190 Leia um caractere maiúsculo, que indica uma operação que deve ser realizada e uma matriz M[12][12]. Em seguida, calcule e mostre a soma ou a média considerando somente aqueles elementos que estão na área direita da matriz, conforme ilustrado abaixo (área verde).*/
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    double matriz[12][12], soma = 0, media = 0;
    int n = 0;
    char op;

    cin >> op;

    for(int i = 0; i < 12; i++) {
        for(int j = 0; j < 12; j++) {
            cin >> matriz[i][j];

            if(j > 11 - i && j > i) {
                soma += matriz[i][j];
                n++;
            }
        }
    }
    
    cout << setprecision(1) << fixed;

    media = soma / n;

    if(op == 'S') {
        cout << soma << endl;
    }
    else {
        cout << media << endl;
    }

    return 0;
}
