/*Consecutivos NepsAcademy - exercise 110*/
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n, count = 0, aux = 1;

    cin >> n;

    int vetor[n];

    for(int i = 0; i < n; i++) {
        cin >> vetor[i];
    }

    for(int i = 1; i < n; i++) {
        if(vetor[i] == vetor[i - 1]) {
            aux++;
        }
        else {
            if(aux > count) {
                count = aux;
            }
            aux = 1;
        }
    }

    if(aux > count) {
        count = aux;
    }

    cout << count << endl;

    return 0;
}
