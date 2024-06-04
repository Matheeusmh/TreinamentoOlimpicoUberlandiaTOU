/* Joãozinho acaba de mudar de escola e a primeira coisa que percebeu na nova escola é que a gangorra do parquinho não é simétrica, uma das extremidades é mais longa que a outra. Após brincar algumas vezes com um amigo de mesmo peso, ele percebeu que quando está em uma extremidade, a gangorra se desequilibra para o lado dele (ou seja, ele fica na parte de baixo, e o amigo na parte de cima), mas quando eles trocam de lado, a gangorra se desequilibra para o lado do amigo.
Sem entender a situação, Joãozinho pediu ajuda a outro amigo de outra série, que explicou que o comprimento do lado interfere no equilíbrio da gangorra, pois a gangorra estará equilibrada quando são os pesos da criança no lado esquerdo e direito, respectivamente, são os comprimentos da gangorra do lado esquerdo e direito, respectivamente.
Com a equação, Joãozinho já consegue dizer se a gangorra está equilibrada ou não mas, além disso, ele quer saber para qual lado a gangorra descerá caso esteja desequilibrada.*/
#include <iostream>

using namespace std;

int main(void) {
    double p1, c1, p2, c2;

    cin >> p1 >> c1 >> p2 >> c2;

    if(p1 * c1 == p2 * c2) {
        cout << "0" << endl;
    }
    else { 
        if(c1 * p1 > c2 * p2) { 
            cout << "-1" << endl;
        }
        else { 
            cout << "1" << endl;
        }
    }

    return 0;
}
