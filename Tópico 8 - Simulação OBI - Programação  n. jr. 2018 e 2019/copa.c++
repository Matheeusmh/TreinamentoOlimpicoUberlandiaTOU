#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int k, l;

    cin >> k;
    cin >> l;

    if(((k <= 8 && l <= 8) || (k >= 9 && l >= 9))) {
        if((k <= 4 && l <= 4) || (k >= 5 && l >= 5) || (k <= 12 && l <= 12) || (k >= 13 && l >= 13)) {
            if((k == 1 && l == 2) || (k == 3 && l == 4) || (k == 5 && l == 6) || (k == 7 && l == 8) || (k == 9 && l == 10) || (k == 11 && l == 12) || (k == 13 && l == 14) || (k == 15 && l == 16) || (k == 16 && l == 15) || (k == 15 && l == 14) || (k == 14 && l == 13) || (k == 13 && l == 12)|| (k == 12 && l == 11)|| (k == 11 && l == 10)|| (k == 10 && l == 9)|| (k == 9 && l == 8)|| (k == 8 && l == 7)|| (k == 7 && l == 6)|| (k == 6 && l == 5)|| (k == 5 && l == 4)|| (k == 4 && l == 3)|| (k == 3 && l == 2)|| (k == 2 && l >= 1)) {
                cout << "oitavas" << endl;
            }
            else {
                cout << "quartas" << endl;
            }
        }
        else {
            cout << "semifinal" << endl;
        }
    }
    else {
        cout << "final" << endl;
    }

    return 0;
}
