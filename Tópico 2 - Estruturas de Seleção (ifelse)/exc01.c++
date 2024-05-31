/* Faça um algoritmo que diga se uma pessoa é maior ou menor de idade. SE A IDADE
DA PESSOA FOR MAIOR OU IGUAL A 18 ANOS ELA É MAIOR DE IDADE.
SENÃO ELA É MENOR DE IDADE */
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int idade;

    cin >> idade;

    if(idade >= 18) {
        cout << "Maior de idade!" << endl;
    }
    else {
        cout << "Menor de idade!" << endl;
    }

    return 0;
}
