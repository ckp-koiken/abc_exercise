#include <bits/stdc++.h>
using namespace std;

// Xがゴール、Yが壁、Zがハンマー
// X < Yなら直接ゴールへ行ける
// X > Yならゴールへ行くためにハンマーを拾う
// Z > Yならハンマーを拾うことは不可能
// Z < YならZにハンマーを拾いに行き、それからXに行く

int main() {
  int X, Y, Z;
  cin >> X >> Y >> Z;

  // Yが負のとき全体に-1をかけて座標Yを正として扱う
  if (Y < 0) {
    X = -X;
    Y = -Y;
    Z = -Z;
  }

  if (X < Y) {
    // X < Yなら直接ゴールへ行くのでXまでの距離を表示
    cout << abs(X) << endl;
  } else {
    // X > Yのときゴールへ行く前にハンマーを拾う
    if (Z > Y) {
      // Z > Yのとき拾えないので不可能
      cout << -1 << endl;
    } else {
      // Z < Yのとき、一回Zに行ってその後Xへ向かう
      cout << abs(Z) + abs(X - Z) << endl;
    }
  }

  return 0;
}