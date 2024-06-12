#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, compara = 0, maior = 0;

    cin >> n;

    int vetor[n];

    for(int i = 0; i < n; i++) {
        cin >> vetor[i];

        if(i == 0) {
            compara++;
        }
        else if(i != n - 1){
            if(vetor[i - 1] == vetor[i]) {
                compara++;
            }
            else {
                if(compara > maior) {
                    maior = compara;
                }
                compara = 0;
            }
        }
        else {
            compara++;
            if(compara > maior) {
                cout << compara << endl;
            }
            else {
                cout << maior << endl;
            }
        }            
    }

    return 0;
}
