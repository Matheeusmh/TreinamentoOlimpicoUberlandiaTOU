#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n; cin >> n;
    vector<int> numeros(n);

    for(int i = 0; i < n; i++) {
        cin >> numeros[i];
    }

    sort(numeros.begin(), numeros.end());

    for(int i = 0; i < n; i++) {
        if(numeros[i] % 2 == 0) {
            cout << numeros[i] << endl;
        }
    }

    for(int i = n - 1; i >= 0; i--) {
        if(numeros[i] % 2 != 0) {
        cout << numeros[i] << endl;
        }
            
    }

    return 0;
}
