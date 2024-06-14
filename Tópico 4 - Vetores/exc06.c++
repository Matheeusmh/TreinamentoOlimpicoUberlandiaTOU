#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int vetor[10], x, count = 0;

    for(int i = 0; i < 10; i++) {
        cin >> vetor[i];
    }

    cin >> x;

    for(int i = 0; i < 10; i++) {
        for(int j = 0; j < 10; j++) {
            if(vetor[j] == x && i == 0) {
                count++;
            }
        }
        if(vetor[i] == x) {
            if(i == 0) {
                cout << count << endl;
            }
            cout << i << " ";
        }
    }

    if(count == 0) {
        cout << "Mia x" << endl;
    }

    return 0;
}
