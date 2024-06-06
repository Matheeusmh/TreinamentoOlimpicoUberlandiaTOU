/*Bino recebeu N inteiros de presente. Ele gostaria de saber quantos múltiplos de 2, 3 e 4 ele recebeu.*/
#include <iostream>

using namespace std;

int main(void) {
    int multiplos2 = 0, multiplos3 = 0, multiplos4 = 0, n, aux;

    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> aux;

        if(aux % 2 == 0) {
            multiplos2++;
            if(aux % 4 == 0) {
                multiplos4++;
            }
        }
        if(aux % 3 == 0) { 
            multiplos3++;
        }
    }

    cout << multiplos2 << endl;
    cout << multiplos3 << endl;
    cout << multiplos4 << endl;

    return 0;
}
