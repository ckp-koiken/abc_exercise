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

  cin >> X >> Y;

  cout << grid[X - 1][Y - 1] << endl;
  return 0;
}