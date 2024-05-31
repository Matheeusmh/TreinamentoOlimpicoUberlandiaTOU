/* No Colégio Neps Academy (CNA) um aluno é aprovado por média se ele obtiver uma média final maior ou igual a 7, caso o aluno tenha uma média menor que 7 mas maior ou igual a 4 ele está de recuperação, caso ele tenha uma média menor que 4 o aluno está reprovado.
A média é calculada com a nota das duas provas aplicadas no semestre e corresponde simplesmente a média aritimética das duas notas.
Baseado nas duas notas do aluno, indique o resultado final do aluno: "Aprovado", "Reprovado" ou "Recuperacao".*/
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    float nota1, nota2, media;

    cin >> nota1;
    cin >> nota2;

    media = (nota1 + nota2) / 2;

    if(media >= 7) {
        cout << "Aprovado" << endl;
    }
    else if(media >= 4 && media < 7) {
        cout << "Recuperacao" << endl;
    }
    else {
        cout << "Reprovado" << endl;
    }

    return 0;
}
