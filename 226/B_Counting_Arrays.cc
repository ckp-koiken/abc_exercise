#include <bits/stdc++.h>
using namespace std;

using vecin=vector<int>;

int main() {
  int N;
  cin >> N;

  set<vecin> se;

  for (int i = 0; i < N; i++) {
    int L;
    cin >> L;

    vector<int> A(L);
    for (int j = 0; j < L; j++) {
      cin >> A[j];
    }
    
    se.insert(A);
  }

  cout << (int)se.size() << endl;
  return 0;
}