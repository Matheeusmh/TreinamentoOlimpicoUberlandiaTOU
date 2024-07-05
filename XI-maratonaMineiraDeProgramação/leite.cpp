#include <bits/stdc++.h>

using namespace std;

int main(void) {    
    int n, l, soma = 0, satisfeitos = 0; cin >> n >> l;
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    sort(v.begin(), v.end());

    for(int i = n - 1; i >= 0; i--) {
        if(soma  + (100 - v[i]) <= l) {
            soma += 100 - v[i];
            
            satisfeitos++;
        }
        else {
            break;
        }
    }

    cout << satisfeitos << endl;

    return 0;
}
