#include <bits/stdc++.h>

using namespace std;

int main(void) {
    int count = 0;
    set<string> joia;
    string input;
    
    while (cin >> input) {
        joia.insert(input);
    }

    for(auto e : joia) {
        count++;
    }

    cout << count << endl;

    return 0;
}
