#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, W;
  cin >> N >> W;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];

  set<int> se(A.begin(), A.end());

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < i; j++) {
      se.insert(A[i] + A[j]);
    }
  }

  for (int i = 0; i < N; i++) { 
    for (int j = 0; j < i; j++) {
      for (int k = 0; k < j; k++) {
        se.insert(A[i] + A[j] + A[k]);
      }
    }
  }

  int ans = 0;
  for (auto s : se) {
    if (s <= W) ans++;
  }

  cout << ans << endl;
  return 0;
}