/*Implemente um programa que lê n palavras da entrada-padrão, e mais uma palavrachave. Você deve localizar e imprimir as palavras que foram digitadas que possuem a
palavra-chave como substring.
a. Dica: o método ::find() retorna o valor específico string::npos se não encontrar
nada (use-o para teste!)*/
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n;
    vector<string> palavras;
    string palavraChave, palavraEntrada;

    cout << "Digite quantas palavras deseja armazenar: " << endl;
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Digite a palavra: ";
        cin >> palavraEntrada;
        palavras.push_back(palavraEntrada);
    }

    cout << "Digite a palavra chave: ";
    cin >> palavraChave;


    for(auto e : palavras) {
        if(e.find(palavraChave) != string :: npos) {
            cout << e << endl;
        }
    }

    return 0;
}
