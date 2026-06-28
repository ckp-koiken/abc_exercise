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

// another answer
// すべての黒いピクセルが含まれるような最小の長方形を考えて
// その範囲のみを出力する
// int main() {
//   int H, W;
//   cin >> H >> W;
//   vector<string> C(H);
//   for (int i = 0; i < H; i++) cin >> C[i];

//   // 最小範囲を絞っていく
//   // 上下左右で最大値を代入
//   int u = H, d = -1;
//   int l = W, r = -1;

//   for (int i = 0; i < H; i++) {
//     for (int j = 0; j < W; j++) {
//       // #のマスが存在したら最小の範囲を
//       // u,d,l,rに代入して更新していく
//       if (C[i][j] == '#') {
//         u = min(u, i); d = max(d, i);
//         l = min(l, j); r = max(r, j);
//       }
//     }
//   }

//   // u,d,l,rの範囲だけを表示する
//   for (int i = u; i <= d; i++) {
//     for (int j = l; j <= r; j++) {
//       cout << C[i][j];
//     }
//     cout << '\n';
//   }
//   return 0;
// }