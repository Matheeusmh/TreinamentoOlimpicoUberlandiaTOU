#include <bits/stdc++.h>

using namespace std;

class Aluno {
    private:
        string nome;
        string codigo;
        string turma;
        double nota1, nota2, nota3, nota4;
        double media;

    public:
        Aluno(string nome, string codigo, string turma, double nota1, double nota2, double nota3, double nota4, double media) {
            this->nome = nome;
            this->turma = turma;
            this->codigo = codigo;
            this->nota1 = nota1;
            this->nota2 = nota2;
            this->nota3 = nota3;
            this->nota4 = nota4;
            this->media = media;
        }

        string getCodigo() {
            return this->codigo;
        }
        string getNome() {
            return this->nome;
        }
        string getTurma() {
            return this->turma;
        }
        double getMedia() {
            return this->media;
        }
        
        string to_string() {
            return "Aluno: " + getNome() + "\nCodigo: " + getCodigo() + "\nTurma: " + getTurma() + "\nMedia: " + getMedia() + to_string();
        }
};

bool ordenarLista(Aluno A, Aluno B) {
    return A.getCodigo() < B.getCodigo();
}

int main(void) {
    list<Aluno> alunos;
    string nome, turma, codigo;
    int n;
    double media, nota1, nota2, nota3, nota4;
    
    cout << "Digite a quantidade de alunos: ";
    cin >> n;

    for(int i = 0; i < n; i++) {
        cout << "Digite o nome do aluno: ";
        cin >> nome;
        cout << "Digite o codigo do aluno: ";
        cin >> codigo;
        cout << "Digite a turma do aluno: ";
        cin >> turma;
        cout << "Digite as quatro notas do aluno: ";
        cin >> nota1 >> nota2 >> nota3 >> nota4;
        media = (nota1 + nota2 + nota3 + nota4) / 4;

        alunos.push_back(Aluno(nome, codigo, turma, nota1, nota2, nota3, nota4, media));
    }

    sort(alunos.begin(), alunos.end(), ordenarLista);

    for(auto e : alunos) {
        cout << e.to_string() << endl;
        cout << "__________________________" << endl;
    }
    
    return 0;
}
