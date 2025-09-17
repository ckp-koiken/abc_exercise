#include <bits/stdc++.h>
using namespace std;

// N個の鍵を配列で管理して
// ロックされている位置の添え字を左右で引けば
// 進めない部屋の数を計算できる
int main() {
  int N;
  cin >> N;
  // 鍵を配列で管理
  vector<int> l(N);
  for (int i = 0; i < N; i++) {
    cin >> l.at(i);
  }

  // 左右の鍵位置の初期位置
  int L = N;
  int R = 0;

  // 鍵の配列を左から順にみる
  for (int i = 0; i < N; i++) {
    if (l.at(i) == 1) {
      // 左側からロックされている位置の最小値を保存
      L = min(L, i);
      // 右側でロックされている位置の最大値を保存
      R = max(R, i);
    }
  }

  // Lが右端を保存しているのであれば進行不能なドアはない
  if (L == N) {
    cout << 0 << endl;
  } else {
    // RとLの差で進行不能な部屋の数を得る
    cout << R - L << endl;
  }

  return 0;
}