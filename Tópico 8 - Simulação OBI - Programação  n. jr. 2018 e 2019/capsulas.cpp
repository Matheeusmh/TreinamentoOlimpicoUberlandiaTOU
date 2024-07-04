/*O discípulo Fan Chi'ih retornou recentemente da China com algumas cápsulas mágicas, que são capazes de produzir moedas de ouro! Uma cápsula possui um certo ciclo de produção, que é um número C de dias. A cada C dias a cápsula produz uma nova moeda; a moeda é sempre produzida no último dia do ciclo. Fan Chi'ih vai ativar todas as cápsulas ao mesmo tempo e quer acumular uma fortuna de pelo menos F moedas. Ele precisa da sua ajuda para computar o número mínimo de dias para que as cápsulas produzam, no total, pelo menos F moedas. Na tabela abaixo, por exemplo, existem três cápsulas com ciclos de 3, 7 e 2 dias.
Se Fan Chi'ih quiser acumular pelo menos 12 moedas, ele vai ter que esperar pelo menos 14 dias.*/
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, f, dias = 0, moedasAcumuladas = 0; 
    cin >> n >> f;
    
    vector<int> capsulas(n);

    for(int i = 0; i < n; i++) {
        cin >> capsulas[i];
    }

    while(f  > moedasAcumuladas) {    
        int i = 0;
        dias++;

        for(int i = 0; i < n; i++) {
            if(dias % capsulas[i] == 0) {
                moedasAcumuladas++;
            } 
        }
    }

    cout << dias << endl;

    return 0;
}
