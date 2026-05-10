#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, L, X, Y;
  cin >> N;
  vector<vector<int>> grid(N);

  for (int i = 0; i < N; i++) {
    int L;
    cin >> L;
    vector<int> A(L);
    for (int j = 0; j < L; j++) cin >> A[j];

    grid[i] = A;
  }

  // memo: 可変長配列を二次元配列で読み込むとき
  // .resize()で必要な長さを確保することができる
  // for (int i = 0; i < N; i++) {
  //   int L;
  //   cin >> L;
  //   grid[i].resize(L);
  //   for (int j = 0; j < L; j++) {
  //     cin >> grid[i][j];
  //   }
  // }

  cin >> X >> Y;

  cout << grid[X - 1][Y - 1] << endl;
  return 0;
}