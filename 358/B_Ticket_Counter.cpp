#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  // i番目の人がチケットを購入し終えるのが今からx_i秒後だとする
  // x_i-1 <= T_iのとき、列が存在しないのですぐに購入手続きができる。よってx_i = T_i + A。
  // x_i-1 > T_iのとき、前の人がチケットを購入しているので,
    // i-1番目の人が購入を終えてからi番目の人が購入できる。よってx_i = x_i-1 + A。
  int pre = 0;  // x_i-1を表す変数。最初は0。
  for (int i = 0; i < N; i++) {
    int T;
    cin >> T;
    // x_i-1とTと比較して大きい方にAを足す。
      // x_i-1の方が大きければまだ前の人が終わっていない。
      // Tの方が大きければ列ができていない。
    int ans = max(pre, T) + A;
    cout << ans << endl;
    pre = ans;
  }

  return 0;
}