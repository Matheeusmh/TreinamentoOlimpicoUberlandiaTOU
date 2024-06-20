/*O discípulo Fan Chi'ih retornou recentemente da China com algumas cápsulas mágicas, que são capazes de produzir moedas de ouro! Uma cápsula possui um certo ciclo de produção, que é um número C de dias. A cada C dias a cápsula produz uma nova moeda; a moeda é sempre produzida no último dia do ciclo. Fan Chi'ih vai ativar todas as cápsulas ao mesmo tempo e quer acumular uma fortuna de pelo menos F moedas. Ele precisa da sua ajuda para computar o número mínimo de dias para que as cápsulas produzam, no total, pelo menos F moedas. Na tabela abaixo, por exemplo, existem três cápsulas com ciclos de 3, 7 e 2 dias.
Se Fan Chi'ih quiser acumular pelo menos 12 moedas, ele vai ter que esperar pelo menos 14 dias.*/
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, f, soma = 0, c = 0, dias = 0, j;

    cin >> n >> f;

    int capsulas[n];

    for(int i = 0; i < n; i++) {
        cin >> capsulas[i];
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n - 1; j++) {
            if(*(capsulas + j) > *(capsulas + (j + 1))) {
                swap(*(capsulas + j), *(capsulas + (j + 1)));
            }
        }
    }

    for(int i = 0; f != soma; i++) {
        for(j = 1; dias < capsulas[n - 1]; j++) {
            if(soma == f) {
                break;
            }
            dias += capsulas[i];
            soma++;
            if(dias >= capsulas[n - 1]) {
                dias -= capsulas[i];
                soma--;
                j = 0;
                break;
            }
        }
        if(f == soma) {
            c += dias;
            break;
        }
        else if(n - 1 == i) {
            i = 0;
            c = capsulas[n - 1];
            soma++;
            dias = 0;
        }
        else {
            c = dias;
            dias = 0;
        }
    }

    cout << c << endl;
    cout << soma << endl;

    return 0;
}
