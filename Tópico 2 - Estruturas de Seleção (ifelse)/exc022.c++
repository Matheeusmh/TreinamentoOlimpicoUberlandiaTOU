#include <iostream>

using namespace std;

int main(void) {
    int l, c;

    cin >> l;
    cin >> c;

    cout << (c * l) + ((l - 1) * (c - 1)) << endl;
    cout << (l - 1) * 2 + (c - 1) * 2 << endl;

    return 0;
}
