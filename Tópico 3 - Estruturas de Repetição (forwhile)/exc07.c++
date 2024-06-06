/*Você está de volta em seu hotel na Tailândia depois de um dia de mergulhos. O seu quarto tem duas lâmpadas. Vamos chamá-las de
A e B. No hotel há dois interruptores. Ao apertar, a lâmpada A acende se estiver apagada, e apaga se estiver acesa. Se apertar, cada uma das lâmpadas A e a B troca de estado: se estiver apagada, fica acesa e se estiver acesa apaga.
As lâmpadas inicialmente estão ambas apagadas. Seu amigo resolveu bolar um desafio para você.
Ele irá apertar os interruptores em uma certa sequência, e gostaria que você respondesse o estado final das lâmpadas A e B.*/
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, a = 0, b = 0, interruptor;

    cin >> n;

    for(int i = 0; i < n; i++) { 
        cin >> interruptor;

        if(a == 1) {
            a = 0;
        }
        else {
            a = 1;
        }
        
        if(interruptor == 2) {
            if(b == 0) {
                b = 1;
            }
            else {
                b = 0;
            }
        }
    }

    cout << a << endl;
    cout << b << endl;

    return 0;
}
