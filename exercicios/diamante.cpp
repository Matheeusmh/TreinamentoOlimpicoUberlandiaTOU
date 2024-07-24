#include <bits/stdc++.h>

using namespace std;

#define f first 
#define s second

int main(void) {
    int n; cin >> n;
    vector<int> diamantes;

    for(int i = 0; i < n; i++) {
        stack<char> fragmentos;
        int diamante = 0;
        string teste; cin >> teste;

        for(auto e : teste) {
            if(e == '<') {
                fragmentos.push(e);
            }
            else if(e == '>' && !fragmentos.empty()) {
                fragmentos.pop();
                diamante++;
            }
        }
        diamantes.push_back(diamante);
    }

    for(auto e : diamantes) {
        cout << e << endl;
    }
    
    return 0;
}
