#include <bits/stdc++.h>
using namespace std;

// 問題文の通りに実装する
// 数値を反転する部分はC++に備わっている機能を活用すると楽(to_string, stoll)
int main() {
  // 数列aを用意する
  // X, Yが大きいのでint64_t(long long)で確保
  vector<int64_t> a(10);

  // 初項と第二項にXとYを入力
  cin >> a.at(0) >> a.at(1);

  // 第三項から10項までをループで実装
  for (int i = 2; i < 10; i++) {
    // 2個前と1個前を足して数値を文字列にする
    // to_stringを使う
    string s = to_string(a[i - 2] + a[i - 1]);
    // reverseで文字列を反転させる
    reverse(s.begin(), s.end());
    // stollで文字列をlonglongに変換する
    a.at(i) = stoll(s);
  }

  // 10項を表示
  cout << a.at(9) << endl;

  return 0;
}