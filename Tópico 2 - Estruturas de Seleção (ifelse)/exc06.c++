/* Faça um algoritmo em C++ para verificar qual pizza a pessoa deseja:
CALABRESA, PRESUNTO ou MARGUERITA. Primeiro
verifique se ela tem R$49.99, que é o valor da nossa
pizza.*/
#include <iostream>

using namespace std;

int main(void) {
    float valorPizza = 49.99, valorDisponivel;

    cout << "Digite o valor disponivel: R$";
    cin >> valorDisponivel;

    if(valorDisponivel >= valorPizza) {
        int op;

        cout << "Escolha uma opcao...\n [1] Calabresa\n [2] Presunto\n [3] Marguerita" << endl;
        cin >> op;
        switch(op) {
            case 1:
                cout << "Compra APROVADA!\nEstamos preparando sua pizza de calabresa..." << endl;
                break;
            case 2:
                cout << "Compra APROVADA!\nEstamos preparando sua pizza de presunto..." << endl;
                break;
            case 3:
                cout << "Compra APROVADA!\nEstamos preparando sua pizza de marguerita..." << endl;
                break;
            default:
                cout << "Opcao INVALIDA!" << endl;
        }
    }
    else {
        cout << "Compra NEGADA!\nValor INSUFICIENTE..." << endl;
    }

    return 0;
}
