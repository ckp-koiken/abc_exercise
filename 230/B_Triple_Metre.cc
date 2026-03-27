#include <bits/stdc++.h>
using namespace std;

// 問題文をそのまま再現する
// Tに"oxx"を10^5回追加して、その中にSが存在するかを確かめる
// Tを先頭から見ていってSの文字分だけsubstrすればよい
int main() {
  string S;
  cin >> S;

  string T = "";
  for (int i = 0; i < 1e5; i++) {
    T += "oxx";
  }

  for (int i = 0; i < (int)T.size(); i++) {
    string R = T.substr(i, (int)S.size());

    if (S == R) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}