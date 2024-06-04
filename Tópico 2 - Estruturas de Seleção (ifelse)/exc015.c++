/* Bino recebeu três inteiros de Cino. Bino gostaria de ordenar esses três valores em ordem crescente.
Ajude Bino em ordenar seus números queridos*/
#include <iostream>

using namespace std;

int main(void) {
    int num1, num2, num3, aux;

    cin >> num1;
    cin >> num2;
    cin >> num3;

    if(num1 > num2 || num1 > num3) {
        if(num1 > num2 && num1 > num3) {
            aux = num1;
            num1 = num3;
            num3 = aux;
            if(num1 > num2) {
                aux = num1;
                num1 = num2;
                num2 = aux;
            }
        }
        else if(num1 > num2) {
            aux = num1;
            num1 = num2;
            num2 = aux;
        }
    }
    else if(num2 > num3) {
        aux = num2;
        num2 = num3;
        num3 = aux;
    }

    cout << num1 << endl;
    cout << num2 << endl;
    cout << num3 << endl;

    return 0;
}
