#include <bits/stdc++.h>
using namespace std;

// 実際にx座標とy座標を動かしてシミュレーションする
int main() {
  int N;
  string T;
  cin >> N >> T;

  // x, y座標。最初は0。
  int x = 0;
  int y = 0; 

  // 進行方向を0~3で管理
  // Rが読み込まれたら進行方向を90度ずつ変える（時計回り）
  // 東（xの正向き）が0、南（yの負向き）が1、西（xの負向き）が2、北（yの正向き）が3
  int d = 0;

  for (int i = 0; i < N; i++) {
    if (T[i] == 'S') {
      // 進行方向に応じてx、yを足し引きする
      if (d == 0) x++;
      if (d == 1) y--;
      if (d == 2) x--;
      if (d == 3) y++;
    }

    // 'R'が読み込まれたらdに1を加えたものを4で割った余りにする
    // 無限に足し続けると3を超えてしまうため
    if (T[i] == 'R') d = (d + 1) % 4;
  }

  cout << x << ' ' << y << endl;

  return 0;
}