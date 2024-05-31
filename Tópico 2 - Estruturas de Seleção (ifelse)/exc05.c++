/* Faça um algoritmo em C++ utilizando IF’s E ELSE’s
combinados para verificar qual pastel a pessoa
deseja: QUEIJO, CARNE ou MISTO. Primeiro verifique
se ela tem R$6.99, que é o valor do nosso pastel. */
#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    float valorDisponivel;

    cout << "Digite o valor disponivel: R$";
    cin >> valorDisponivel;

    if (valorDisponivel >= 6.99)
    {
        int op;

        cout << "Escolha uma opcao de pastel...\n [1] Carne\n [2] Queijo\n [3] Misto" << endl;
        cin >> op;
        
        if(op == 1) {
            cout << "Compra APROVADA!\nEstamos preparando o seu pastel de carne..." << endl;
        }
        else if(op == 2) {
            cout << "Compra APROVADA!\nEstamos preparando o seu pastel de queijo..." << endl;
        }
        else {
            cout << "Compra APROVADA!\nEstamos preparando o seu pastel misto..." << endl;
        }
    }
    else {
        cout << "Saldo INSUFICIENTE!" << endl;
    }

    return 0;
}
