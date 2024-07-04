/*Temos um vetor de N inteiros distintos e dois inteiros I e F. Precisamos computar quantos pares desses inteiros do vetor somam pelo menos I e no máximo F. Por exemplo, se o vetor for [45,12,11,7,83,29,5] e I=19 e F=52, temos exatamente 8 pares cuja soma está entre 19 e 52: {5,29}, {5,45}, {7,12}, {7,29}, {7,45}, {11,12}, {11,29} e {12,29}.*/
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

