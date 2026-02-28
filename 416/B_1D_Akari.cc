#include <bits/stdc++.h>
using namespace std;

// Sのいくつかを.をoに置き換えるが、2つのoの間には#があるようにしたい
// 連続する.のなかでoに置き換えられるのは1つまで
// ...#..だと左の...と右の..で1つずつ
// oに置き換える文字をできるだけ左側にする
// Tの1文字目以外は#.となる場所を#oに置き換えれば良い
int main() {
  string S;
  cin >> S;

  // Sと同じ長さの文字配列Tを用意する
  int n = (int)S.size();
  vector<char> T(n);

  for (int i = 0; i < n; i++) {
    if (S[i] == '#') {
      // Sが#ならそのまま#
      cout << '#';
    } else if (i == 0 || S[i - 1] == '#') {
      // #以外で最初の文字、もしくはSのひとつ前が#ならo
      cout << 'o';
    } else {
      // それ以外なら.
      cout << '.';
    }
  }

  cout << '\n';
  return 0;
}