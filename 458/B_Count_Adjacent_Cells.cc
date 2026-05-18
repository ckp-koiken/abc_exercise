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