/*Flíper é um tipo de jogo onde uma bolinha de metal cai por um labirinto de caminhos até chegar na parte de baixo do labirinto. A quantidade de pontos que o jogador ganha depende do caminho que a bolinha seguir. O jogador pode controlar o percurso da bolinha mudando a posição de algumas portinhas do labirinto. Cada portinha pode estar na posição 0, que significa virada para a esquerda, ou na posição 1 que quer dizer virada para a direita. Considere o flíper da figura abaixo, que tem duas portinhas. A portinha P está na posição 1 e a portinha R, na posição 0.
Desse jeito, a bolinha vai cair pelo caminho B.*/
#include <bits/stdc++.h>

using namespace std;

int main(void) { 
    int p, r;

    cin >> p;
    cin >> r;

    if(p == 1 && r == 1) { 
        cout << "A" << endl;
    }
    else if(p == 1 && r == 0) { 
        cout << "B" << endl;
    }
    else { 
        cout << "C" << endl;
    }

    return 0;
}
