#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  int64_t T;
  cin >> N >> M >> T;
  vector<int> A(N - 1);
  for (int i = 0; i < N - 1; i++) {
    cin >> A[i];
  }

  vector<int> bonus(N + 1);
  for (int i = 0; i < M; i++) {
    int x, y;
    cin >> x >> y;
    bonus[x] = y;
  }

  for (int i = 0; i < N - 1; i++) {
    T -= A[i];
    if (T <= 0) {
      cout << "No" << endl;
      return 0;
    }
    T += bonus[i + 2];
  }

  cout << "Yes" << endl;

  return 0;
}