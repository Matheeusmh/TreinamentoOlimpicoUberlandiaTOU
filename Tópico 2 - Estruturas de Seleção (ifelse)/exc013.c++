/* Bino recebeu de Cino três inteiros de presente e gostaria de saber qual dos três inteiros é o maior. */
#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int num1, num2, num3;

    cin >> num1;
    cin >> num2;
    cin >> num3;

    if(num1 > num2) {
        if(num1 > num3) {
            cout << num1 << endl;
        }
        else {
            cout << num3 << endl;
        }
    }
    else if(num2 > num1) {
        if(num2 > num3) {
            cout << num2 << endl;
        }
        else {
            cout << num3 << endl;
        }
    }
    else {
        cout << num3 << endl;
    }

    return 0;
}
