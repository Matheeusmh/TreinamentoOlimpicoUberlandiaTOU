#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int freq[32];
    memset(freq, 0, sizeof freq);
    for (int k = 0; k < n; k++) {
        int a; cin >> a;
        for (int i = 0; i < 32; i++) {
            if (a &(1<<i)) {
                freq[i]++;
            }
        }
    }

    for (int k = 0; k < n; k++) {
        int num = 0;
        for (int i = 0; i < 32; i++) {
            if (freq[i] >= 1) {
                num += (1 << i);
                freq[i]--;
            }
        }
        cout << num;
        if (k != n-1) cout << ' ';
    }
    cout << '\n';
}