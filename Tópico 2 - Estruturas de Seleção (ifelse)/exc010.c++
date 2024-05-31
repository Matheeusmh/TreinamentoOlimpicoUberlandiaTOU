/* Bino e Cino gostam muito de brincar de par ou ímpar. Bino sempre escolhe par e Cino sempre escolhe ímpar.
Faça um programa para automatizar o resultado o jogo de par ou ímpar. Seu programa deve ler a quantidade de dedos que cada um utilizou e imprimir o nome do ganhador.*/
#include <iostream>

using namespace std;

int main(void) {
    int bino, cino;

    cin >> bino;
    cin >> cino;

    if((bino + cino) % 2 == 0) {
        cout << "Bino" << endl;
    }
    else {
        cout << "Cino" << endl;
    }

    return 0;
}
