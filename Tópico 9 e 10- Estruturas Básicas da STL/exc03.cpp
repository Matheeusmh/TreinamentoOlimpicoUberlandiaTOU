/*4. Escreva um programa que recebe de entrada nomes e telefones correspondentes.
a. A entrada deve ser n nomes e n telefones
i. Defina uma classe e seus métodos para armazenamento de tais
informações
b. Na saída, imprima a lista [<nome> <telefone>] ordenada pelos nomes
i. Crie uma função para comparação
ii. Explore o algoritmo sort de STL
c. Após isso, o programa deve ler um nome da entrada padrão e imprimir seu
telefone correspondente, se este existir. Se não existir, imprima uma
mensagem apropriada */
#include <bits/stdc++.h>

using namespace std;

class Contato {
    string nome;
    string telefone;
    public:
        Contato(string nome, string telefone) {
            this->nome = nome;
            this->telefone = telefone;
        }

        string getNome() {
            return nome;
        }

        string getTelefone() {
            return telefone;
        }
};

bool ordenarNomes(Contato A, Contato B)
{
    return A.getNome() < B.getNome();
}

int main(void) {
    vector<Contato> listaContatos;
    int n;
    bool encontrado;
    string nome, telefone;

    cout << "Digite a quantidade de contatos: ";
    cin >> n;
    cout << endl;

    for(int i = 0; i < n; i++) {
        cout << "Nome: ";
        cin >> nome;
        cout << "Telefone: ";
        cin >> telefone;
        cout << endl;

        listaContatos.push_back(Contato(nome, telefone));
    }

    sort(listaContatos.begin(), listaContatos.end(), ordenarNomes);

    cout << endl;
    for(auto e : listaContatos) {
        cout << "Nome: " << e.getNome() << "\nTelefone: " << e.getTelefone() << endl;
        cout << "_____________________" << endl;
    }

    cout << "\nDigite o nome do contato que deseja: ";
    cin >> nome;

    for(auto e : listaContatos) {
        if(e.getNome() == nome) {
            cout << "Telefone: " << e.getTelefone() << endl;
            encontrado = true;
        }
    }

    if(!encontrado) {
        cout << "Contato nao encontrado!!" << endl;
    }

    return 0;
}
