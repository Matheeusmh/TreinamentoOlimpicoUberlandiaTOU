/*Faça um algoritmo em C++ que diga se uma pessoa tem poucas ou muitas tarefas.
SE A PESSOA TIVER 5 OU MAIS TAREFAS, ELA TEM MUITAS TAREFAS
SENÃO ELA TEM POUCAS TAREFAS */
#include <iostream>

using namespace std;

int main(void) {
    int tarefas;

    cout << "Digite o numero de tarefas: ";
    cin >> tarefas;

    if(tarefas >= 5) {
        cout << "MUITAS tarefas!" << endl;
    }
    else {
        cout << "POUCAS tarefas!" << endl;
    }

    return 0;
}
