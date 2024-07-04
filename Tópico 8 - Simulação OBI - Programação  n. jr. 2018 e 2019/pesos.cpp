/*Uma fábrica instalou um elevador composto de duas cabines ligadas por uma roldana, como na figura. Quando uma cabine sobe, a outra desce. No primeiro andar da fábrica existem algumas caixas de pesos diversos e precisamos levar todas as caixas para o segundo andar, usando o elevador. Apenas uma caixa pode ser colocada por vez dentro de uma cabine. Além disso, existe uma restrição de segurança importante: durante uma viagem do elevador, a diferença de peso entre as cabines pode ser no máximo de 8 unidades. De forma mais rigorosa, P-Q ≤ 8, onde P é o peso da cabine mais pesada e Q, o peso da cabine mais leve. O gerente da fábrica não está preocupado com o número de viagens que o elevador vai fazer. Ele apenas precisa saber se é possível ou não levar todas as caixas para o segundo andar.
No exemplo da figura, podemos levar todas as três caixas usando a seguinte sequência de seis viagens do elevador:*/
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
    int n; cin >> n;
    vector<int> vet(n);

    for(int i = 0; i < n; i++) {
        cin >> vet[i];
    }

    bool possibilidade = 1;

    for(int i = 0; i < n - 1; i++) {
        if((i == 0 && vet[i] > 8)|| vet[i + 1] - vet[i] > 8) {
            cout << "N" << endl;
            possibilidade = 0;
            break;
        }
    }

    if(possibilidade) {
        cout << "S" << endl;
    }

    return 0;
}
