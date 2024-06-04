/*No tabuleiro de xadrez, a casa na linha 1, coluna 1 (canto superior esquerdo) é sempre branca e as cores das casas se alternam entre branca e preta, de acordo com o padrão conhecido como...xadrez! Dessa forma, como o tabuleiro tradicional tem oito linhas e oito colunas, a casa na linha 8, coluna 8 (canto inferior direito) será também branca.
Neste problema, entretanto, queremos saber a cor da casa no canto inferior direito de um tabuleiro com dimensões quaisquer: 
L linhas e C colunas. No exemplo da figura, para L=6 e C=9, a casa no canto inferior direito será preta!*/
#include <iostream>

using namespace std;

int main(void) {
    int l, c;

    cin >> l;
    cin >> c;

    if(l % 2 != 0) {
        if(c % 2 != 0) {
            cout << "1" << endl;
        }
        else {
            cout << "0" << endl;
        }
    }
    else {
        if(c % 2 == 0) {
            cout << "1" << endl;
        }
        else {
            cout << "0" << endl;
        }
    }

    return 0;
}
