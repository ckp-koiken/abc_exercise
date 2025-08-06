#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // 部分文字列を列挙し重複を除いて数える
  // substr()で抽出してsetを使って数える
  set<string> st;
  
  for (int i = 0; i < S.size(); i++) {
    // 部分文字列の開始位置iを指定するためのループ
    for (int j = 1; i + j <= S.size(); j++) {
      // 部分文字列の抽出部分jを指定するためのループ（開始が1）
      // 開始位置iと抽出部分jの合計がSの大きさになるまでループする
      st.insert(S.substr(i, j));
    }
  }

  // setの要素数が答えになる
  cout << st.size() << endl;
  return 0;
}