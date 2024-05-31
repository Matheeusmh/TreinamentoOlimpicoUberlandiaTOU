/* Faça um algoritmo em C++ que diga se a pessoa pode ou não comprar um sapato de R$239.99.
SE ELA TIVER O VALOR DO SAPATO OU MAIS DIGA QUE ELA VAI COMPRAR
SENÃO DIGA QUE ELA NÃO PODE COMPRAR */
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    float valorSapato = 239.99, valorDisponivel;

    cout << "Digite quanto voce tem disponivel: R$";
    cin >> valorDisponivel;

    if(valorDisponivel >= valorSapato) {
        cout << "Voce pode comprar o sapato!" << endl;
    }
    else {
        cout << "Voce NAO pode comprar o sapato!" << endl;
    }

    return 0;
} 
