#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;

  // 箱カウント用の配列を用意
  vector<int> cnt(N + 1);

  // Q個のボールを全部見ていく
  for (int qi = 0; qi < Q; qi++) {
    int x;
    cin >> x;

    // xが0のとき
    if (x == 0) {
      // N個の箱を一つずつ見ていって一番小さい要素数のものを選ぶ
      int l = 100000; // 大きな値の変数を用意して比較して最小のものを探す
      for (int i = 1; i <= N; i++) {
        l = min(l, cnt.at(i));
      }

      // 一番小さい要素数の箱番号を取得しxに代入
      for (int i = 1; i <= N; i++) {
        if (l == cnt.at(i)){
          x = i;
          break;
        }
      }
    }
    // xが1以上の時は箱の番号が自動的に決まるからxはそのまま

    cout << x << " ";
    cnt.at(x)++;  // 該当する箱に一つ増やす
  }
  cout << endl;
  return 0;
}