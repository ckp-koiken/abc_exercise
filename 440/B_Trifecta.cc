#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> T(N);
  for (int i = 0; i < N; i++) cin >> T[i];

  vector<int> A = T;
  sort(A.begin(), A.end());

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < N; j++) {
      if (A[i] == T[j]) {
        cout << j + 1 << ' ';
      }
    }
  }

  cout << '\n';
  return 0;
}
