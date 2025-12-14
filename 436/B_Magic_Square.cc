#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<int>> data(N, vector<int>(N, 0));

  int r, c, k;
  r = 0;
  c = (N - 1) / 2;
  k = 1;
  data[r][c] = k;

  int rep = N * N - 1;

  for (int i = 0; i < rep; i++) {
    int tmp_r = (r + N - 1) % N;
    int tmp_c = (c + 1) % N;
    k = k + 1;

    if (data[tmp_r][tmp_c] == 0) {
      data[tmp_r][tmp_c] = k;
      r = tmp_r;
      c = tmp_c;
    } else {
      tmp_r = (r + 1) % N;
      data[tmp_r][c] = k;
      r = tmp_r;
    }

  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << data[i][j] << " ";
    }
    cout << '\n';
  }
  return 0;
}