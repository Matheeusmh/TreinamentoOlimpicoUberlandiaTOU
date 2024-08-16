#include <bits/stdc++.h>

using namespace std;

long long fat(int n) {
    if (n == 0) return 1;
    else {
        return n * fat(n - 1);
    }
}

int main(void) {
    int n, m;

    while(cin >> n >> m) {

        cout << fat(n) + fat(m) << endl;
    }

    return 0;
}
