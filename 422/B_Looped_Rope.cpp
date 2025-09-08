#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> S(H, string(W, '.'));

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> S.at(i).at(j);
    }
  }

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (S.at(i).at(j) == '#') {
        int cnt = 0;
        int t_x, t_y;
        // 上
        t_y = i - 1;
        if (t_y >= 0) {
          if (S.at(t_y).at(j) == '#') cnt++;
        }
        // 下
        t_y = i + 1;
        if (t_y < H) {
          if (S.at(t_y).at(j) == '#') cnt++;
        }

        // 左
        t_x = j - 1;
        if (t_x >= 0) {
          if (S.at(i).at(t_x) == '#') cnt++;
        }

        // 右
        t_x = j + 1;
        if (t_x < W) {
          if (S.at(i).at(t_x) == '#') cnt++;
        }

        // 条件確認
        if (!(cnt == 2 || cnt == 4)) {
          cout << "No" << endl;
          return 0;
        }
      }
    }
  }

  cout << "Yes" << endl;

  return 0;
}