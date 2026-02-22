#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  
  set<int> se;
  
  for (int i = 0; i < N; i++) {
    int L;
    cin >> L;
    
    vector<int> X(L);
    for (int j = 0; j < L; j++) {
      cin >> X[j];
    }
    
    int k = 0;
    for (int j = 0; j < L; j++) {
      if (!se.count(X[j])) {
        k = X[j];
        break;
      }
    }
    
    cout << k << endl;
    se.insert(k);
    
  }
  return 0;
}