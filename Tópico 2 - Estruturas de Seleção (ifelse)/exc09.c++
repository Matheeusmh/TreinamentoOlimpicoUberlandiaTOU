/* Faça um algoritmo que diga se um número é positivo ou negativo e par ou ímpar.
Exemplos: 3 par e positivo; -8 par e negativo; 5 ímpar e positivo; -1 ímpar e negativo */
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int num;

    cout << "Digite um numero inteiro: ";
    cin >> num;
    
    if(num < 0) {
        if(num % 2 == 0) {
            cout << num << " eh par e negativo!" << endl;
        }
        else {
            cout << num << " eh impar e negativo!" << endl;
        }
    }
    else {
        if(num % 2 == 0) {
            cout << num << " eh par e positivo!" << endl;
        }
        else {
            cout << num << " eh impar e positivo!" << endl;
        }
    }

    return 0;
}
