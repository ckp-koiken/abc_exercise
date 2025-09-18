#include <bits/stdc++.h>
using namespace std;

// 文字列が回文かどうかを判定する関数
// 元の文字列を逆にしたものと元の文字列が等しければ回文
bool isPalindrome(string s) {
  string t = s;
  reverse(t.begin(), t.end());
  return s == t;
}

// 全ての部分文字列を探索する
// その部分文字列が回文であるかどうかを判定する
// 回文であるもののなかで最大の長さであるものを見つける
int main() {
  string s;
  cin >> s;
  int n = s.size();
  int ans = 0;

  // 左をl、右をrとして、
  // lとrの間の部分文字列を抽出
  for (int l = 0; l < n; l++) {
    for (int r = l; r < n; r++) {
      // 部分文字列を抽出
      // l番目からr-l+1の長さを抽出
      string ns = s.substr(l, r - l + 1);

      // 回文かどうかを判定して長さの最大値をansに更新
      if (isPalindrome(ns)) ans = max(ans, r - l + 1);
    }
  }

  cout << ans << endl;
  return 0;
}