#include <bits/stdc++.h>
using namespace std;

// 8方向の移動
// 左上、上、右上、左、右、左下、下、右下
int di[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dj[] = {-1, 0, 1, -1, 1, -1, 0, 1};

int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  for (int i = 0; i < h; i++) cin >> s[i];

  string T = "snuke";

  for (int si = 0; si < h; si++) {
    for (int sj = 0; sj < w; sj++) {
      for (int v = 0; v < 8; v++) {
        int i = si, j = sj;

        for (int k = 0; k < 5; k++) {
          if (i < 0 || j < 0 || i >= h || j >= w) break;
          if (s[i][j] != T[k]) break;
          if (k == 4) {
            i = si; j = sj;
            for (int nk = 0; nk < 5; nk++) {
              cout << i + 1 << ' ' << j + 1 << endl;
              i += di[v];
              j += dj[v];
            }
            return 0;
          }
          i += di[v];
          j += dj[v];
        }
      }
    }
  }
  return 0;
}