#include <bits/stdc++.h>
using namespace std;

int main() {
  int W, B;
  cin >> W >> B;

  // 鍵盤の数が12個周期で繰り返す
  // wとbの合計（部分文字列）が12個周期の中に含まれるかを探索する
  // 12個周期で繰り返すので最初の周期で見つからなければ後もずっと同じ
  int N = W + B;
  string s = "wbwbwwbwbwbw";
  int m = s.size();

  // 鍵盤12個を探索するループ
  // siが12個のどの場所から探索するかを表すインデックス
  for (int si = 0; si < m; si++) {
    int cnt = 0;
    // 鍵盤の中からwとbの部分文字列を探索するループ
    // iが鍵盤12個の中の探索場所を表すインデックス
    for (int i = 0; i < N; i++) {
      // si(開始位置)+i(探索位置)
      // インデックスの数が増えるとsの幅をあふれてしまうので、
      // 12個で割った余りの位置で探索
      if (s.at((si + i) % m) == 'w') {
        // 'w'の数をカウントする
        // 12個周期なので'w'の数が満たされなければ'b'も自動的に満たさない
        cnt++;
      }
    }
    if (cnt == W) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}