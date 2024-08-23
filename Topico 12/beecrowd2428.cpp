#include<bits/stdc++.h>

using namespace std;

int main(void) {
    vector<int> areas(4);

    for(int i = 0; i < 4; i++) {
        cin >> areas[i];
    }

    sort(areas.begin(), areas.end());
    
    if(areas[0] * areas[3] == areas[1] * areas[2]) cout << "S\n";
    else cout <<"N\n";

    return 0;
}
