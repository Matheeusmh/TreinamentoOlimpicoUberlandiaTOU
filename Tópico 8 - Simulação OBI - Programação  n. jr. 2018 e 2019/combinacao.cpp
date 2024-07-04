/*Na calçada em frente ao Palácio Imperial, não se sabe a razão, existe uma sequência de N números desenhados no chão. A sequência tem a seguinte forma: ela começa e termina com o número 1; apenas os números 1 e 2 aparecem nela; e o número 2 aparece pelo menos uma vez. Veja um exemplo na coluna (a) da figura abaixo.
Ninguém sabe o significado da sequência e, justamente por isso, várias teorias malucas surgiram. Uma delas diz que a sequência representa, na verdade, apenas um valor que estaria relacionado a um segredo dos imperadores. Esse valor é a quantidade máxima de números da sequência que poderiam ser marcados com um círculo, de modo que a sequência de números marcados não contenha dois números iguais consecutivos.
A coluna (b) da figura acima ilustra uma sequência de 4 números marcados que obedece a restrição acima. Só que é possível marcar 7 números, como mostra a coluna (c) da figura.
Neste problema, dada a sequência original de números desenhados no chão da calçada, seu programa deve computar e imprimir a quantidade máxima de números da sequência que poderiam ser marcados com um círculo sem que haja dois números iguais consecutivos na sequência marcada.
*/
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, combinacao = 1; cin >> n;
    vector<int> vet(n);
    vector<int> vetSemRep;
    
    for(int i = 0; i < n; i++) {
        cin >> vet[i];
    }


    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(vet[i] != vet[j]) {
                vetSemRep.push_back(vet[i]);
                combinacao++;
                i = j - 1;
                break;
            }
        }
    }

    cout << combinacao << endl;

    return 0;
}
