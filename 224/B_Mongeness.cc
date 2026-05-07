#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int64_t>> A(H, vector<int64_t>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> A[i][j];
    }
  }

  for (int i = 0; i < H - 1; i++) {
    for (int j = 0; j < W - 1; j++) {
      if ((A[i][j] + A[i + 1][j + 1]) > (A[i + 1][j] + A[i][j + 1])) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
  return 0;
}