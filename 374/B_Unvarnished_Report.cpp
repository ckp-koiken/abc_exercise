#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  
  int n;
  string j, k;
  if (S.size() > T.size()) {
    n = S.size();
  } else {
    n = T.size();
  }

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (S[i] == T[i]) { // 範囲外参照になる可能性がある
      cnt++;
    } else {
      cnt++;
      cout << cnt << endl;
      return 0;
    }
  }

  // another answer
  // 小さい方をnにする
  // n = min(S.size(), T.size());

  // cntを作らず、S[i] != T[i]と判定された時点でi+1を返せば
  // 範囲外参照を生じない
  // for (int i = 0; i < n; i++) {
  //   if (S[i] != T[i]) {
  //     cout << (i + 1) << endl;
  //     return 0;
  //   }
  // }

  cout << 0 << endl;
  return 0;
}