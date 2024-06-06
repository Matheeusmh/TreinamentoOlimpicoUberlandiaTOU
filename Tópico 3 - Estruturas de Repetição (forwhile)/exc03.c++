/*Bino desafiou Cino a descobrir o número que ele estava pensando. Bino está pensando no número 2018. Cino vai informar números até que acerte o número que Bino está pensando.
Faça um programa para receber os números que Cino chutou. Seu programa só deve parar de solicitar um valor quando Cino acertar o 2018.*/
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n;

    for(int i = 0; n != 2018; i++) {
        cin >> n;

        if(n == 2018) {
            cout << i << endl;
        }
    }

    return 0;
}
