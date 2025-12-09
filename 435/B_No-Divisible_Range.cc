#include <bits/stdc++.h>
using namespace std;

int main() { 
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];

  int ans = 0;
  for (int l = 0; l < N; l++) {
    for (int r = 0; r < N; r++) {
      if (l >= r) continue;

      int total = 0;
      for (int i = l; i <= r; i++) {
        total += A[i];
      }

      bool check = true;
      for (int i = l; i <= r; i++) {
        check = check & (total % A[i] != 0);
      }

      if (check) ans++;
    }
  }

  cout << ans << endl;
  
  return 0;
}