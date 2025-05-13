#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;

  // 要素nのベクトルを用意する（'.'で初期化）
  // 文字'.'をn個配置した文字列をn個配置した2次元配列を作る
  // std::string(...)でcharから文字列作成
  vector<string> s(n, string(n, '.'));

  // iをl、jをrとしてn回ループ
  // 0始まりのインデックスとするため
  for (int l = 0; l < n; l++) {
    int r = n - 1 - l;  // j = n + 1 - i を1減らしたもの

    // l > rならなにもしない
    if (l > r) {
      continue;
    }

    // 挿入文字をcとする
    // lが偶数なら'.'にする
    char c = l % 2 ? '.' : '#';

    // iとjをlからrまでループしながらcを代入
    // 条件は問題文の指示通り
    for (int i = l; i <= r; i++) {
      for (int j = l; j <= r; j++) {
        s.at(i).at(j) = c;
      }
    }
  }

  // 表示
  for (int i = 0; i < n; i++) {
    cout << s.at(i) << endl;
  }

  return 0;
}