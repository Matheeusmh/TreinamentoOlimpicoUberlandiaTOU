#include <bits/stdc++.h>

using namespace std;

int main(void) {
  int n, i, f, pares = 0; cin >> n >> i >> f;
  vector<int> numeros(n);
  
  for(int i = 0; i < n; i++) cin >> numeros[i];
  
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      if(numeros[i] + numeros[j] <= 52 && numeros[i] + numeros[j] >= 19) {
        pares++;
      }
    }
  }
  
  cout << pares << endl;
  
  return 0;
}
