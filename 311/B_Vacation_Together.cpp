#include <bits/stdc++.h>
using namespace std;

// j日目が全員暇かどうかと
// 全員暇な日が連続して何日続くかを考える
int main() {
  int N, D;
  cin >> N >> D;
  vector<string> S(N);
  for (int i = 0; i < N; i++) {
    cin >> S.at(i);
  }

  int ans = 0, cur = 0;
  for (int j = 0; j < D; j++) {
    // j日目が全員暇かどうかを確認する
    int can = 1;
      // another ex
      // bool can = true;

    for (int i = 0; i < N; i++) {
      // canが1かつS.at(i).at(j)がoのとき暇な状態
      // 途中でcanが0になったり、S.at(i).at(j)がxのときcanは0になる
      can &= S.at(i).at(j) == 'o';
        // another ex
        // if (can && S.at(i).at(j) == 'o') {
        //   can = true;
        // } else {
        //   can = false;
        // }
    }

    // canが1のとき全員暇なのでcurをインクリメントする
    // canが0のときは連続カウントを止めるために0を代入
    if (can) {
      cur++;
    } else {
      cur = 0;
    }

    // 連続日数の最大値を更新する
    ans = max(ans, cur);
  }

  cout << ans << endl;
  return 0;
}
