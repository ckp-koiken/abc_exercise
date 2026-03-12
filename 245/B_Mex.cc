#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  int max_num = *max_element(A.begin(), A.end());
  set<int> se(A.begin(), A.end());

  // 配列Aの中にmax_numまでの数字が欠けずに全てあった場合
  // 配列の中だけで答えを見つけることができない
  // なのでmax_num+1まで探索する（配列内の最大値+1が答えになる）
  for (int i = 0; i <= max_num + 1; i++) {
    if (!se.count(i)) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}

// another answer
// 0から順番に数が配列Aの中にあるかどうかを確認する
// あったらtrue、なかったらfalseの状態にして
// falseだったときその数を出力して終了する
/*
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) cin >> a[i];

  // 0から順番に数を確認するための変数x
  int x = 0;

  // 無限ループ
  while (true) {
    // 数の有無を示すbool変数。初期値はfalse。
    bool exist = false;

    // 配列Aを全て見ていってAの中にxがあればtrueに
    for (int i = 0; i < n; i++) {
      if (a[i] == x) exist = true;
    }

    // falseのままであれば配列Aにその数がないということ
    // xを出力して終了
    if (!exist) {
      cout << x << endl;
      return 0;
    }

    // xをインクリメント
    x++;
  }
  return 0;
}
*/