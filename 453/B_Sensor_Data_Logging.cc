#include <bits/stdc++.h>
using namespace std;

using P = pair<int, int>;

int main() {
  int T, X;
  cin >> T >> X;
  vector<int> A(T + 1);
  for (int i = 0; i < T + 1; i++) cin >> A[i];

  vector<P> record;
  int time = 0;
  int now = A[0];
  record.emplace_back(time, now);

  for (int i = 1; i < T + 1; i++) {
    int diff = abs(A[i] - now);
    if (diff >= X) {
      now = A[i];
      time = i;
      record.emplace_back(time, now);
    }
  }

  for (auto r : record) {
    cout << r.first << ' ' << r.second << endl;
  }
  return 0;
}

// another answer
// Aを配列に保存しなくても良い
// 直前の記録との差がX以上の時に表示するようにする

// int main() {
//   int t, x;
//   cin >> t >> x;

//   // pは前回の記録値
//   // 最初(t=0)の時も記録したいので-xとしておいて絶対に記録されるようにする
//   int p = -x;

//   for (int i = 0; i < t + 1; i++) {
//     int a;
//     cin >> a;

//     // a-pがx以上ならその時のiと値aを表示
//     // その後直前値pをaに更新
//     if (abs(a - p) >= x) {
//       cout << i << ' ' << a << endl;
//       p = a;
//     }
//   }

//   return 0;
// }