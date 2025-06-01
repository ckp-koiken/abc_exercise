#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W, D;
  cin >> H >> W >> D;
  vector<string> S(H);
  for (int i = 0; i < H; i++) {
    cin >> S.at(i);
  }

  int ans = 0;
  for (int i1 = 0; i1 < H; i1++) {
    for (int j1 = 0; j1 < W; j1++) {
      if (S.at(i1).at(j1) == '#') {
        continue;
      }

      for (int i2 = 0; i2 < H; i2++) {
        for (int j2 = 0; j2 < W; j2++) {
          if (S.at(i2).at(j2) == '#' || (i1 == i2 && j1 == j2)) {
            continue;
          }

          int tmp = 0;
          for (int i = 0; i < H; i++) {
            for (int j = 0; j < W; j++) {
              if (S.at(i).at(j) == '.' && (abs(i - i1) + abs(j - j1) <= D || abs(i - i2) + abs(j - j2) <= D)) {
                tmp++;
              }
            }
          }
          ans = max(ans, tmp);
        }
      }
    }
  }
  cout << ans << endl;

  return 0;
}