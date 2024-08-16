#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, soma = 0; cin >> n;

    for(int i = 0; i < n; i++) {
        string codigo; cin >> codigo;

        for(auto e : codigo) {
            switch (e)
            {
            case '0':
                soma += 6;
                break;
            case '1':
                soma += 2;
                break;
            case '2':
                soma += 5;
                break;
            case '3':
                soma += 5;
                break;
            case '4':
                soma += 4;
                break;
            case '5':
                soma += 5;
                break;
            case '6':
                soma += 6;
                break;
            case '7':
                soma += 3;
                break;
            case '8':
                soma += 7;
                break;
            case '9':
                soma += 6;
                break;
            }
        }

        cout << soma << " leds" << endl;
        soma = 0;
    }

    return 0;
}
