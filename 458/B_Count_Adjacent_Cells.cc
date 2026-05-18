#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> grid(H, vector<int>(W, 0));

  for (int si = 0; si < H; si++) {
    for (int sj = 0; sj < W; sj++) {
      for (int ti = 0; ti < H; ti++) {
        for (int tj = 0; tj < W; tj++) {
          if (abs(si - ti) + abs(sj - tj) == 1) grid[si][sj]++;
        }
      }
    }
  }

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cout << grid[i][j] << ' ';
    }
    cout << '\n';
  }

  return 0;
}

// another answer
// 上下左右を見てマスの端でなければ1を足していく
// int main() {
//   int h, w;
//   cin >> h >> w;
//   vector<vector<int>> ans(h, vector<int>(w));

//   for (int i = 0; i < h; i++) {
//     for (int j = 0; j < w; j++) {
//       // 4方向を見る

//       // 左を見て0以上であれば1加える
//       if (i - 1 >= 0) ans[i][j]++;
//       // 右をみて右端でなければ（<h)1加える
//       if (i + 1 < h) ans[i][j]++;
//       // 上を見て0以上であれば1加える
//       if (j - 1 >= 0) ans[i][j]++;
//       // 下を見て最下部でなければ(<w)1加える
//       if (j + 1 < w) ans[i][j]++;
//     }
//   }

//   for (int i = 0; i < h; i++) {
//     for (int j = 0; j < w; j++) {
//       cout << ans[i][j] << ' ';
//     }
//     cout << '\n';
//   }

//   return 0;
// }