/*Uma brincadeira muito comum e divertida entre dois jogadores usa uma moeda e três copos opacos (ou seja, não é possível ver o que está dentro do copo olhando pela lateral do copo). Os três copos são colocados com a boca para baixo, em uma linha, um ao lado do outro, em posições que vamos chamar de A, B e C. Uma moeda é colocada embaixo de um dos copos.

Na brincadeira, um jogador chamado banca realiza um movimento para trocar a posição de dois copos, arrastando os copos de tal modo que se a moeda está em baixo de um dos copos envolvidos no movimento, ela continua embaixo do mesmo copo após a troca de posição. O jogador banca pode realizar três tipos de movimento, ilustrados na figura abaixo:

Trocar o copo na posição A com o copo na posição B.
Trocar o copo na posição B com o copo na posição C.
Trocar o copo na posição A com o copo na posição C.
O jogador banca realiza vários movimentos de troca tentando confundir o outro jogador, chamado espectador. Ao final o jogador espectador deve dizer em qual posição está a moeda.

Por exemplo, considere que inicialmente a moeda está embaixo do copo na posição A e que o jogador banca realiza uma sequência de apenas três trocas, executando um movimento do tipo 1, após o qual moeda termina embaixo do copo na posição B, seguido de um movimento do tipo 2, após o qual a moeda termina embaixo do copo na posição C, seguido de um movimento do tipo 3, após o qual a moeda termina embaixo do copo na posição A.

Nesta tarefa, dadas a descrição da sequência de movimentos e a posição inicial da moeda, você deve escrever um programa que determine a posição final da moeda após todos os movimentos.*/
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n; cin >> n;
    char posicao; cin >> posicao;
    vector<int> tipoDoMovimento(n);

    for(int i = 0; i < n; i++) {
        cin >> tipoDoMovimento[i];
    }

    for(int i = 0; i < n; i++) {
        if(tipoDoMovimento[i] == 1) {
            if(posicao == 'A') {
                posicao = 'B';
            }
            else if(posicao == 'B'){
                posicao = 'A';
            }
        }
        else if(tipoDoMovimento[i] == 2) {
            if(posicao == 'B') {
                posicao = 'C';
            }
            else if(posicao == 'C') {
                posicao = 'B';
            }
        }
        else {
            if(posicao == 'C') {
                posicao = 'A';
            }
            else if(posicao == 'A') posicao = 'C';
        }
    }
    
    cout << posicao << endl;

    return 0;
}
