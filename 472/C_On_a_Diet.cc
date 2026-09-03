#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  int64_t K;
  cin >> N >> M >> K;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];

  int64_t sum = 0;
  for (int i = 0; i < N; i++) {
    if (i >= M) sum -= A[i - M];

    if (sum + A[i] <= K) {
      sum += A[i];
      cout << "Yes" << endl;
    } else {
      A[i] = 0;
      cout << "No" << endl;
    }
  }
  return 0;
}