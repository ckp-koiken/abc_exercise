#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W;
  cin >> H >> W;
  vector<vector<int>> A(H, vector<int>(W));
  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      cin >> A[i][j];
    }
  }

  for (int i = 0; i < H; i++) {
    for (int j = 0; j < W; j++) {
      if (A[i][j] == 0) {
        cout << '.';
      } else {
        char tmp = 'A' + A[i][j] - 1;
        cout << tmp;
      }
    }
    cout << '\n';
  }
  
  return 0;
}