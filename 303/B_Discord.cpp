#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> A(M, vector<int>(N));
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      cin >> A[i][j];
    }
  }

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      A[i][j]--;
    }
  }

  vector<vector<bool>> G(N, vector<bool>(N));
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N - 1; j++) {
      G[A[i][j]][A[i][j + 1]] = true;
    }
  }

  int ans = 0;
  for (int x = 0; x < N; x++) {
    for (int y = 0; y < x; y++) {
      if (G[x][y] || G[y][x]) continue;
      ans++;
    }
  }
  cout << ans << endl;

  return 0;
}
