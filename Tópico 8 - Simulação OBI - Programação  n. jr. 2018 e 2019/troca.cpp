/*Um cientista especializado em bioinformática está estudando formas de simular alguns fenômenos, que ocorrem dentro das células, relacionados ao funcionamento de proteínas. Parece muito complicado, não? Só que o problema computacional básico que ele precisa resolver eficientemente é fácil de entender. Existe uma sequência de N cartas, indexadas de 1 a N, e cada carta contém dois números impressos, um de cada lado. As cartas são colocadas na mesa, na sequência, com um dos lados virado para cima. Dados dois inteiros i e j, com i ≤ j, a operação troca(i,j) consiste em virar todas as cartas da posição i até a posição j, inclusive. Por exemplo, considere a sequência de cartas abaixo.

virado para cima	31	2	45	3	8	1	32	10	4	27	12	7	7	9	63	47
virado para baixo	1	12	6	4	97	2	87	10	3	9	55	56	11	90	3	8
A operação de troca(5,11) resultaria na seguinte sequência de cartas:

virado para cima	31	2	45	3	97	2	87	10	3	9	55	7	7	9	63	47
virado para baixo	1	12	6	4	8	1	32	10	4	27	12	56	11	90	3	8
O problema do cientista é que a sequência de cartas pode ser muito grande e podem ser feitas muitas operações de troca. Ele precisa saber a sequência dos números que estarão virados para cima ao final de todas as operações. Você pode ajudá-lo?*/
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
    int n, t; cin >> n >> t;
    vector<pair<int, int>> cartas(n);
    vector<pair<int, int>> troca(t);

    for(int i = 0; i < n; i++) {
        cin >> cartas[i].f;
    }

    for(int i = 0; i < n; i++) {
        cin >> cartas[i].s;
    }

    for(int i = 0; i < t; i++) {
        cin >> troca[i].f >> troca[i].s;

        for(int begin = troca[i].f - 1; begin != troca[i].s; begin++) {
            swap(cartas[begin].f, cartas[begin].s);
        }
    }

    cout << endl;

    for(auto e : cartas) {
        cout << e.f << " ";
    }
    
    return 0;
}
