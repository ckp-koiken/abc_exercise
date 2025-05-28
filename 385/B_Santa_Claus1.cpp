#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W, X, Y;
  cin >> H >> W >> X >> Y;
  // インデックスをプログラム側に合わせるために1ずつ減らす
  X--;
  Y--;

  // 文字列の配列なので多次元配列
  vector<string> S(H);
  for (int i = 0; i < H; i++) {
    cin >> S.at(i);
  }
  string T;
  cin >> T;

  // 通過・到達した家の数
  int C = 0;
  // 一文字ずつ見ていく
  for (char t : T) {
    // 各文字に合わせて移動し、行先が'#'でなければ移動
    if (t == 'U' && S.at(X - 1).at(Y) != '#') X--;
    if (t == 'D' && S.at(X + 1).at(Y) != '#') X++;
    if (t == 'L' && S.at(X).at(Y - 1) != '#') Y--;
    if (t == 'R' && S.at(X).at(Y + 1) != '#') Y++;
    // '@'の家を通過したらもう一度家を通らないように'.'でつぶす
    if (S.at(X).at(Y) == '@') {
      S.at(X).at(Y) = '.';
      C++;
    }
  }

  // 答えを表示するときにXとYを1ずつ足しておく
  cout << X + 1 << " " << Y + 1 << " " << C << endl;

  return 0;
}

// MEMO: 問題文をちゃんと解釈しよう