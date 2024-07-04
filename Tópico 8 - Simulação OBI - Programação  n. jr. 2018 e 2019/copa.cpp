/*O sorteio das posições dos jogadores na chave decisiva da copa do mundo de ping-pong está deixando a todos nervosos. É que ninguém quer pegar o jogador mais bem ranqueado, o Mestre Kung, logo nas oitavas de final, ou nas quartas de final. Melhor que só seja possível enfrentar Mestre Kung na semifinal ou na final!
A chave possui 16 posições numeradas de 1 a 16, como na figura abaixo. A organização da copa vai fazer um sorteio para definir em qual posição cada jogador vai iniciar a chave decisiva. Nas oitavas de final, o jogador na posição 1 enfrenta o jogador na posição 2; o da posição 3 enfrenta o da posição 4; e assim por diante, como na figura.*/
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
    int k, l, count = 0;
    
    cin >> k >> l;

    if(k < 9 && l > 8 || k > 8 && l < 9) {
        cout << "final" << endl;
    }
    else {
        if((k < 5 && l > 4 || k > 4 && l < 5) || (k > 12 && l < 13 || k < 13 && l > 12)) {
            cout << "semifinal" << endl;
        } 
        else {
            for(int i = 1; i <= 16; i++) {
                if(k == i && l == i + 1 || k == i + 1 && l == i) {
                    count++;
                }
                i++;
            }
            if(count == 1) {
                cout << "oitavas" << endl;
            }
            else {
                cout << "quartas" << endl;
            }
        }
    }
    return 0;
}