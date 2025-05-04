#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  // ログイン状態を示すフラグ
  bool logged_in = false;
  // 認証エラーを返す回数
  int unauthorized = 0;

  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;

    // ログインしたならばフラグをtrueに
    if (s == "login") {
      logged_in = true;
    }

    // ログアウトしたならばフラグをfalseに
    if (s == "logout") {
      logged_in = false;
    }

    // ログインしてない状態で非公開ページにアクセスしたときエラーの回数を増やす
    if (s == "private" && !logged_in) {
      unauthorized++;
    }
  }

  cout << unauthorized << endl;

  return 0;
}