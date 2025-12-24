#include <bits/stdc++.h>
using namespace std;

// 8行8列のグリッド
// 中央のマスを中心として対称で規則的な形をしていることを利用する
// 中央のマスからの距離が奇数のマスは黒、偶数のマスは白
// チェビシェフ距離（チェス盤距離）が奇数の時黒、そうでないとき白
// max{|R - 8|, |C - 8|}
int main() {
  int R, C;
  cin >> R >> C;

  if (max(abs(R - 8), abs(C - 8)) % 2) {
    cout << "black" << endl;
  } else {
    cout << "white" << endl;
  }

  return 0;
}