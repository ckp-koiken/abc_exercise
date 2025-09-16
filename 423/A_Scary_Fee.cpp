#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, C;
  cin >> X >> C;

  // 引き出し額を1000m円と置くと
  // 1000m + Cm <= X
  // 1000を1000+Cで割った答えが引き出し回数の最大値
  // 1000をかければ答えになる
  int cnt = X / (1000 + C);
  int ans = cnt * 1000;

  cout << ans << endl;
  return 0;
}

// another answer
// 全探索でも書ける
// int main() {
//   int x, c;
//   cin >> x >> c;

//   int ans = 0;
//   while (true) {
//     int now = ans + 1000;
//     if (now + now / 1000 * c > x) break;
//     ans = now;
//   }

//   cout << ans << endl;
// }