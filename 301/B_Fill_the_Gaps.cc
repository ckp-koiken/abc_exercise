#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];

  vector<int> B;
  for (int i = 0; i < N - 1; i++) {
    B.push_back(A[i]);
    // ケアレスミスミス注意
    // 絶対値が1より大きいのが条件（!= 2 ではない）
    if (abs(A[i] - A[i + 1]) > 1) {
      if (A[i] < A[i + 1]) {
        int diff = A[i + 1] - A[i];
        for (int j = 1; j < diff; j++) {
          B.push_back(A[i] + j);
        }
      } else {
        int diff = A[i] - A[i + 1];
        for (int j = 1; j < diff; j++) {
          B.push_back(A[i] - j);
        }
      }
    }
  }

  B.push_back(A[N - 1]);

  for (int b : B) {
    cout << b << ' ';
  }
  cout << '\n';

  return 0;
}