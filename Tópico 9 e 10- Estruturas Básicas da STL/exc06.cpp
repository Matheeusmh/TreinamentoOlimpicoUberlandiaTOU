/*beecrowd | 1248 O doutor deu a você a sua dieta, na qual cada caractere corresponde a algum alimento que você deveria comer. Você também sabe o que você tem comido no café da manha e no almoço, nos quais cada caractere corresponde a um tipo de alimento que você deveria ter comido aquele dia. Você decidiu que irá comer todo o restante de sua dieta durante o jantar, e você quer imprimi-la como uma String (ordenada em ordem alfabética). Se você trapaceou de algum modo (ou por comer muito de tipo de alimento, ou por comer algum alimento que não está no plano de dieta), você deveria imprimir a cadeia "CHEATER" (significa trapaceiro), sem as aspas.*/
#include <bits/stdc++.h>

using namespace std;

class Dieta {
    string dieta;
    string consumidos;
 
    public:
    Dieta(string dieta, string consumidos) {
        this->dieta = dieta;
        this->consumidos = consumidos;
    }

    string getDieta() {
        return this->dieta;
    }
    string getConsumidos() {
        return this->consumidos;
    }
};

int main(void) {
    int testes, cheater = 0;
    vector<Dieta> comparacao;

    cin >> testes;

    for(int i = 0; i < testes; i++) {
        string dieta, cafe, almoco;

        cin >> dieta;
        cin >> cafe;
        cin >> almoco;

        comparacao.push_back(Dieta(dieta, cafe + almoco));
    }

    for(auto i = comparacao.begin(); i != comparacao.end(); i++) {
        string janta;

        for(char c : i->getDieta()) {
            if(i->getConsumidos().find(c) == string :: npos) {
                janta += c;
            }
        }
        for(char c : i->getConsumidos()) {
            if(i->getDieta().find(c) == string :: npos) {
                cheater++;
            }
        }
        if(cheater == 0) {
            sort(janta.begin(), janta.end());
            cout << janta << endl;
        }

    }
    if(cheater != 0) {
        cout << "CHEATER" << endl;
        cheater = 0;
    }

    return 0;
}
