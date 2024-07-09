#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int n; cin >> n;
    vector<int> vet(n);

    for(int i = 0; i < n; i++) {
        cin >> vet[i];
    }

    sort(vet.begin(), vet.end());

    for(int i = 0; i < n; i++) {
        if(vet[i] % 2 != 0) {
            cout << vet[i] << " ";
        }
    }

    for(int i = 0; i < n; i++) {
        if(vet[i] % 2 == 0) {
            cout << vet[i] << " ";
        }
    }

    return 0;
}
