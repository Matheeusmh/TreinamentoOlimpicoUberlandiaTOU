/*Todo mundo está jogando um novo game de realidade aumentada no celular, com batalhas entre monstrinhos! Nas primeiras fases do jogo as batalhas são bem simples, mas ainda assim bastante divertidas. Dois jogadores vão escolher um monstrinho cada, na sua coleção de monstrinhos. Cada monstrinho tem um tipo de ataque e um tipo de defesa, que são identificados por números naturais. A regra da batalha, que consiste em cada monstrinho usar seu respectivo ataque ao mesmo tempo, é que se o número da defesa de um monstrinho é igual ao número do ataque do seu oponente, então ele não sofre nenhum dano; caso contrário, se o número da defesa dele é diferente do ataque do oponente, então ele sofre dano total e desmaia! Por exemplo, o monstrinho do primeiro jogador tem o ataque 21 e a defesa 7; enquanto que o monstrinho do segundo jogador tem o ataque 7 e a defesa 12. 
Nesse caso, o primeiro jogador vence, pois não desmaiou, enquanto que o segundo jogador desmaiou. Assim, o resultado da batalha, que seu programa deve determinar, pode ser:*/
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
    pair<pair<int, int>, pair<int, int>> jogadores({0, 0}, {0, 0});

    cin >> jogadores.f.f >> jogadores.f.s;
    cin >> jogadores.s.f >> jogadores.s.s;

    if(jogadores.f.f > jogadores.s.s && jogadores.f.s >= jogadores.s.f) {
        if(jogadores.s.f >jogadores.f.s) {
            cout << "-1" << endl;
        }
    }
    else if(jogadores.s.f > jogadores.f.s && jogadores.s.s >= jogadores.f.f){
        cout << "2" << endl;
    }
    else{
        cout << "-1" << endl;
    }

    return 0;
}