#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;

  vector<vector<bool>> grid(H, vector<bool>(W));

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      int cnt = 0;
      for (int k = 0; k < H; k++) {
        for (int l = 0; l < W; l++) {
          if ((abs(i - k) + abs(j - l)) == 1) cnt++;
        }
      }
      if (cnt <= 3) grid[i][j] = true;
    }
  }
  
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (grid[i][j]) {
        cout << '#';
      } else {
        cout << '.';
      }
    }
    cout << '\n';
  }
  return 0;
}