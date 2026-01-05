#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int res = N;
  for (int i = 0; i < 10; i++) {
    string num = to_string(res);
    vector<int> check;
    int m = (int)num.size();

    for (int j = 0; j < m; j++) {
      check.push_back(num[j] - '0');
    }

    res = 0;
    for (int c : check) {
      res += c * c;
    }

    if (res == 1) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}


// another answer
// ハッピー数の操作を行う関数を用意して
// nが1に到達するまで操作後の数値の置き換え続ける

// ハッピー数の操作結果を返す関数
// int f(int n) {
//   // 一度文字列にする
//   string s = to_string(n);
//
//   // 各桁の2乗を足していく
//   int res = 0;
//   for (auto &nx : s) {
//     res += (nx - '0') * (nx - '0');
//   }
//
//   return res;
// }
//
// int main() {
//   int n;
//   cin >> n;
//
//   // ハッピー数の操作結果を管理するsetを用意
//   set<int> history;
//
//   // nが1になるまでハッピー数かどうかの確認を繰り返す
//   // n>1のとき、historyのなかにnがあればno
//   // nがhistoryの中にあるということはすでにこのnを見たことがある
//   // 同じnがでてくるということは無限ループに突入してしまうのでアウト
//   while (n > 1) {
//     if (history.count(n)) {
//       cout << "No" << endl;
//       return 0;
//     }
//
//     // nをhistoryに追加
//     history.insert(n);
//
//     // nをハッピー数操作した結果に上書き
//     n = f(n);
//   }
//
//   cout << "Yes" << endl;
//   return 0;
// }
