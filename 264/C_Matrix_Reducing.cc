#include <bits/stdc++.h>
using namespace std;

int main() {
  int h1, w1;
  cin >> h1 >> w1;
  vector<vector<int>> a(h1, vector<int>(w1));
  for (int i = 0; i < h1; i++) {
    for (int j = 0; j < w1; j++) {
      cin >> a[i][j];
    }
  }
  int h2, w2;
  cin >> h2 >> w2;
  vector<vector<int>> b(h2, vector<int>(w2));
  for (int i = 0; i < h2; i++) {
    for (int j = 0; j < w2; j++) {
      cin >> b[i][j];
    }
  }

  for (int hs = 0; hs < (1 << h1); hs++) {
    for (int ws = 0; ws < (1 << w1); ws++) {
      vector<int> is, js;
      for (int i = 0; i < h1; i++) {
        if (hs >> i & 1) {
          is.push_back(i);
        }
      }

      for (int j = 0; j < w1; j++) {
        if (ws >> j & 1) {
          js.push_back(j);
        }
      }

      if (is.size() != h2) continue;
      if (js.size() != w2) continue;

      vector<vector<int>> c(h2, vector<int>(w2));

      for (int i = 0; i < h2; i++) {
        for (int j = 0; j < w2; j++) {
          c[i][j] = a[is[i]][js[j]];
        }
      }

      if (b == c) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}