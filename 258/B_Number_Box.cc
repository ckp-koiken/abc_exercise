#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int64_t ans = 0;
  vector<vector<int64_t>> A(N, vector<int64_t>(N));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      char c;
      cin >> c;
      A[i][j] = c - '0';
    }
  }

  vector<int> p = {1, 1, 1, 0, 0, -1, -1, -1};
  vector<int> q = {1, 0, -1, 1, -1, 1, 0, -1};

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      for (int k = 0; k < 8; k++) {
        int64_t now = 0;
        int64_t x = i, y = j;
        for (int l = 0; l < N; l++) {
          now *= 10;
          now += A[x][y];
          x += p[k];
          y += q[k];
          x %= N;
          x += N;
          y %= N;
          y += N;
          x %= N;
          y %= N;
        }
        ans = max(ans, now);
      }
    }
  }

  cout << ans << endl;

  return 0;
}
