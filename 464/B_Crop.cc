#include <bits/stdc++.h>
using namespace std;

// 与えられたグリッドを90度ずつ4回転させて
// 一番下の行が全部白だったとき削除していく方針
int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  for (int i = 0; i < h; i++) cin >> s[i];

  // 90度ずつ4回転
  for (int ri = 0; ri < 4; ri++) {
    // sの最後の行に#がなければその行を削除
    // 可能な限り末尾要素を削りたいのでwhile文
    while (count(s.back().begin(), s.back().end(), '#') == 0) {
      // pop_back()で末尾要素を削除
      s.pop_back();

      // 削った分だけhを1つ減らしておく
      h--;
    }

    // sの逆をとる
    reverse(s.begin(), s.end());

    // hとwを入れ替えて転置をとる
    swap(h, w);

    // 転置をとった状態の配列tを作る
    // sからtに代入し直して90度回転した状態を作る
    vector<string> t(h, string(w, '.'));
    for (int i = 0; i < h; i++) {
      for (int j = 0; j < w; j++) {
        t[i][j] = s[j][i];
      }
    }

    // tからsに再代入
    swap(s, t);
  }

  // sを全体表示
  for (int i = 0; i < h; i++) {
    cout << s[i] << endl;
  }
  return 0;
}
