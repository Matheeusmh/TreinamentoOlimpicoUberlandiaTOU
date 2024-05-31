/* Faça um algoritmo que diga se o preço da gasolina está caro ou barato. SE O
PREÇO FOR MAIOR QUE 5.98 A GASOLINA ESTÁ CARA. SENÃO ELA ESTÁ
BARATA */
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    double gasolina;

    cin >> gasolina;

    if(gasolina > 5.98) {
        cout << "A gasolina esta cara!" << endl;
    }
    else {
        cout << "A gasolina esta barata!" << endl;
    }

    return 0;
}
