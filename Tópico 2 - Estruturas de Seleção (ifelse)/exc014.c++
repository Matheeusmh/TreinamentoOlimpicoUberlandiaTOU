/*Faça um programa para ler dois inteiros X e Y representando um ponto em um plano cartesiano.
Imprima qual quadrante esse ponto de encontra. Caso o ponto esteja em algum eixo, imprima apenas a mensagem "eixos".*/
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int x, y;

    cin >> x;
    cin >> y;

    if(x != 0 && y != 0) {
        if(x > 0 && y > 0) {
            cout << "Q1" << endl;
        }
        else if(x < 0 && y > 0) {
            cout << "Q2" << endl;
        }
        else if(x < 0 && y < 0) {
            cout << "Q3" << endl;
        }
        else {
            cout << "Q4" << endl;
        }
    }
    else {
        cout << "eixos" << endl;
    }

    return 0;
}
