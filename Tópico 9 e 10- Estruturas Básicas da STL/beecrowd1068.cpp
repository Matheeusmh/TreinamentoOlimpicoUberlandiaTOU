#include <bits/stdc++.h>

using namespace std;

int main(void) {
    vector<bool> correto;
    string expressao;
    int aux = 0;

    while(cin >> expressao) {
        int parenteses = 0;
        int tamanho = expressao.length();

        for(int i = 0; i < tamanho; i++) {
            if(expressao[i] == '(') {
                parenteses++;
            }
            else if(expressao[i] == ')') {
                if(parenteses > 0) {
                    parenteses--;
                }
                else {
                    parenteses++;
                    break;
                }
            }
        }
    if(parenteses == 0) {
        correto.push_back(true);
    }
    else {
        correto.push_back(false);
    }
    aux++;
    }

    for(int i = 0; i < aux; i++) {
        if(correto[i]) {
            cout << "correct" << endl;
        }
        else {
            cout << "incorrect" << endl;
        }
    }

    return 0;
}