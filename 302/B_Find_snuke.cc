#include <bits/stdc++.h>
using namespace std;

// 8方向の移動
// 左上、上、右上、左、右、左下、下、右下
int di[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dj[] = {-1, 0, 1, -1, 1, -1, 0, 1};

// 文字列をみつけるための始点を探索する
// 始点から8方向を探して"snuke"となっているかを確認する
// 8方向を探すときは移動方向を示した配列を作っておくと便利
int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  for (int i = 0; i < h; i++) cin >> s[i];

  // 正解の文字列を保存
  string T = "snuke";

  // マス目×マス目のループで始点を探す
  for (int si = 0; si < h; si++) {
    for (int sj = 0; sj < w; sj++) {

      // 8方向を探すループ
      for (int v = 0; v < 8; v++) {
        // si,sjをその時の始点として固定
        int i = si, j = sj;

        // 5文字分を探索
        for (int k = 0; k < 5; k++) {
          // 範囲外参照をしないようにi,j>0でi<h,j<wでないときはbreak
          if (i < 0 || j < 0 || i >= h || j >= w) break;

          // 1文字でも文字列Tと合致しなければbreak
          if (s[i][j] != T[k]) break;

          // 5文字分を探索できたら(kが4になるようにループが回っていたら)
          // 正解が見つかっているということ
          if (k == 4) {
            // その時のsi, sjをi,に固定
            i = si; j = sj;

            // 始点から5文字分の座標を表示
            // やり方は探索のときと同様
            for (int nk = 0; nk < 5; nk++) {
              cout << i + 1 << ' ' << j + 1 << endl;
              i += di[v];
              j += dj[v];
            }
            // 表示し終わったらプログラムを終了
            return 0;
          }

          // 8方向への探索
          // 移動方向の座標を保存しておいて、その分だけi,jを移動させる
          i += di[v];
          j += dj[v];
        }
      }
    }
  }
  return 0;
}