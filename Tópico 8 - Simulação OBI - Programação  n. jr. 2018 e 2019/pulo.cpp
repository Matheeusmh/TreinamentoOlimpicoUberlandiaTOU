/*O gato Obinho gosta de brincar no pátio do colégio, no qual há uma sequência de C lajotas, que podem ser brancas ou pretas. Obinho está na lajota inicial da sequência (a mais à esquerda), e quer ir pulando até a lajota final da sequência (a mais à direita). Mas ele só gosta de pular de uma lajota preta para outra lajota preta, nunca pisando numa lajota branca. Além disso, ele não consegue pular muito longe.
A parte esquerda da figura mostra as lajotas que o Obinho pode alcançar com um pulo: uma distância máxima de duas lajotas.*/
#include <bits/stdc++.h>

using namespace std;

#define _ ios_base :: sync_with_stdio(0);cin.tie(0);
#define endl '\n'
#define f first 
#define s second

typedef long long ll;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main() {_
    int c; cin >> c;
    int lajotas[c], pulos = 0;
    bool possivel = 1;

    for(int i = 0; i < c; i++) {
        cin >> lajotas[i];
    }
    
    for(int i = 0; i < c; i++) {
        if(lajotas[i + 2] == 1 && i + 2 < c) {
            pulos++;
            i++;
            if(i == c - 2) {
                break;
            }
        }
        else if(lajotas[i + 1] == 1 && i + 1 < c) {
            pulos++;
            if(i == c - 2) {
                break;
            }
        }
        else{
            cout << "-1" << endl;
            possivel = 0;
            break;
        }
    }

    if(possivel) {
        cout << pulos << endl;
    }

    return 0;
}
