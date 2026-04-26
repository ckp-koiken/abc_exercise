#include <bits/stdc++.h>
using namespace std;

// H列W行のグリッドから長方形を抽出する
// h1, w1, h2, w2で囲われた長方形の領域
// その中で点対象に塗られているものを探す
// 長方形のなかでi, jを使って探索
// 点対象で塗られる条件が(i, j)と(h1+h2-i, w1+w2-j)が同じ色で塗られていること

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  for (int i = 0; i < H; i++) cin >> S[i];

  int ans = 0;

  // h1,w1,h2,w2のループでグリッドの中から長方形の領域を探索
  // h1<=h2, w1<=w2なのでh2,w2のループをh1,w1始まりにする
  for (int h1 = 0; h1 < H; h1++) {
    for (int w1 = 0; w1 < W; w1++) {
      for (int h2 = h1; h2 < H; h2++) {
        for (int w2 = w1; w2 < W; w2++) {
          // 条件を満たす長方形がいくつあるかを数える
          // 探索している長方形の領域が点対象で塗られているかどうかをboolで管理
          bool ok = true;

          // h1からh2、w1からw2までのループで長方形内を探索
          for (int i = h1; i <= h2; i++) {
            for (int j = w1; j <= w2; j++) {
              // 点対象の条件を満たさない塗り方をされているのであればfalseに
              if (S[i][j] != S[h1 + h2 - i][w1 + w2 - j]) ok = false;
            }
          }
          // trueのままである長方形をカウント
          if (ok) ans++;
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}