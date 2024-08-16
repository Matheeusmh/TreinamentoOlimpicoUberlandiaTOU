#include<bits/stdc++.h>

using namespace std;

int main(void) {
    int n, count = 0; cin >> n;
    vector<int> filaOriginal, filaOrdenada;

    while(n > 0) {
        int m; cin >> m;

        filaOriginal.assign(m, 0);
        for(int i = 0; i < m; ++i) {
            cin >> filaOriginal[i];
        }

        filaOrdenada = filaOriginal;

        sort(filaOrdenada.begin(), filaOrdenada.end(), greater<int>());

        for(int i = 0; i < m; i++) {
            if(filaOriginal[i] == filaOrdenada[i]) {
                ++count;
            }
        }

        cout << count << endl;
        count = 0;
        n--;
    }

    return 0;
}