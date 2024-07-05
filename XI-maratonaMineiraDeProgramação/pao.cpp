#include <bits/stdc++.h>

using namespace std;

#define f first 
#define s second 

int main(void) {
    int n, d, nMaximo = 0, count = 0; cin >> n >> d;
    vector<pair<int, bool>> paes(n);
    bool aux = false;

    for(int i = 0; i < n; i++) {
        cin >> paes[i].f;

        paes[i].s = false;
    }

    while(count < n) {
        aux = false;

        for(int i = 0; i < n; i++) {
            if(paes[i].f == d && !aux) {
                nMaximo++;
                paes[i].f = -1;
                paes[i].s = false;
                count++;
                aux = true;
            }

            if(!paes[i].s) {
                paes[i].f--;

            }
            else {
                paes[i].f++;

                if(paes[i].f > d && paes[i].f <= 100) {
                    count++;
                    paes[i].first = 101;
                }
            }

            if(paes[i].f == 0) {
                paes[i].s = true;
            }

            if(count >= n) {
                break;
            }
        }
    }

    cout << nMaximo << endl;

    return 0;
}
