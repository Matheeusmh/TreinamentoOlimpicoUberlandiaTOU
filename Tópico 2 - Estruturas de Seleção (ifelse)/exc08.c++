/* Faça um algoritmo em C++ que diga se um número
é par ou ímpar */
#include <iostream>

using namespace std;

int main(void) {
    int num;

    cout << "Digite um numero inteiro: ";
    cin >> num;

    if(num % 2 == 0) {
        cout << num << " eh um numero PAR!" << endl;
    }
    else {
        cout << num << " eh um numero IMPAR!" << endl;
    }

    return 0;
}
