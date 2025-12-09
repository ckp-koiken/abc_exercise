#include <bits/stdc++.h>
using namespace std;

int main() { 
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];

  int ans = 0;
  for (int l = 0; l < N - 1; l++) {
    for (int r = l + 1; r < N; r++) {
      // if (l >= r) continue;
      // MEMO: lとrをそれぞれ全探索するより
      // lより大きいrとして探索したほうが早い

      // MEMO: 当初凡ミス
      // iはrまで参照しなければならないから<=とすべきところを<としていた
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