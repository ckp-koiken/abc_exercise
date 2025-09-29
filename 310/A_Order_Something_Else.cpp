#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, P, Q;
  cin >> N >> P >> Q;
  vector<int> D(N);
  for (int &d : D) cin >> d;

  int min = *min_element(D.begin(), D.end());
  int dis = Q + min;

  if (P > dis) {
    cout << dis << endl;
  } else {
    cout << P << endl;
  }

  return 0;
}

// another answer
// 最小値の求め方を工夫できる
// int main() {
//   int n, p, q;
//   cin >> n >> p >> q;

//   // 配列にせずにdでd_minの最小値を更新していく
//   int d_min = 100000;
//   int d;
//   for (int i = 0; i < n; i++) {
//     cin >> d;
//     d_min = min(d_min, d);
//   }

//   // 割引を使わないpと割引を使ったq+d_minの小さい方を表示する
//   cout << min (p, q + d_min) << endl;
//   return 0;
// }