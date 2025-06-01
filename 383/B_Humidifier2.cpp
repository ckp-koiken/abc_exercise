#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W, D;
  cin >> H >> W >> D;
  vector<string> S(H);
  for (int i = 0; i < H; i++) {
    cin >> S.at(i);
  }

  // (i1, j1)と(i2, j2)で加湿器を置くマスを全探索して、
  // 加湿されるマスの数を求めて最大値を計算する
  int ans = 0;
  for (int i1 = 0; i1 < H; i1++) {
    for (int j1 = 0; j1 < W; j1++) {
      // (i1, j1)について床のマスではないときにパス
      if (S.at(i1).at(j1) == '#') {
        continue;
      }

      for (int i2 = 0; i2 < H; i2++) {
        for (int j2 = 0; j2 < W; j2++) {
          // (i2, j2)について床のマスではないか、
          // 片方の加湿器と同じ場所の場合パス
          if (S.at(i2).at(j2) == '#' || (i1 == i2 && j1 == j2)) {
            continue;
          }

          // 条件に合うマスを数える
          int tmp = 0;
          for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
              // 床のマスであり、かつ、2箇所の加湿器の置いてある場所との
              // マンハッタン距離がD以下であるマスの数
              if (S.at(i).at(j) == '.' && (abs(i - i1) + abs(j - j1) <= D || abs(i - i2) + abs(j - j2) <= D)) {
                tmp++;
              }
            }
          }
          // 最大値を求める
          ans = max(ans, tmp);
        }
      }
    }
  }
  cout << ans << endl;

  return 0;
}