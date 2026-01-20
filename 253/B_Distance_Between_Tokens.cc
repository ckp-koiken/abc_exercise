#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<string> S(H);
  for (int i = 0; i < H; i++) cin >> S[i];

  vector<int> y;
  vector<int> x;
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (S[i][j] == 'o') {
        y.push_back(i);
        x.push_back(j);
      }
    }
  }

  int ans = abs(x[0] - x[1]) + abs(y[0] - y[1]);

  cout << ans << endl;
  return 0;
}
