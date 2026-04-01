#include <bits/stdc++.h>
using namespace std;

// A, Bのユークリッド距離はsqrt{A^2 + B^2}
// 距離が1になるようなA, Bを選べば良い
// A/sqrt{A^2 + B^2}、B/sqrt{A^2 + B^2}を計算する
int main() {
  int A, B;
  cin >> A >> B;
  
  double d = sqrt(A * A + B * B);
  
  cout << fixed << setprecision(10) << A / d << ' ' << B / d << endl;
  return 0;
}