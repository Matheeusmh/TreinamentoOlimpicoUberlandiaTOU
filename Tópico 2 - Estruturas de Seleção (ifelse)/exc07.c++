/* Faça um algoritmo em C++ que diga se um número
é positivo, negativo ou nulo */
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n;

    cout << "Digite um valor inteiro: ";
    cin >> n;

    if(n >= 0) {
        if(n > 0) {
            cout << "O valor eh POSITIVO!" << endl;
        }
        else {
            cout << "O valor eh NULO!" << endl;
        }
    }
    else {
        cout << "O valor eh NEGATIVO!" << endl;
    }

    return 0;
}
