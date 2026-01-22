#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  vector<int> B(K);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }
  for (int i = 0; i < K; i++) {
    cin >> B[i];
  }

  int yummy = 0;
  for (int i = 0; i < N; i++) {
    yummy = max(A[i], yummy);
  }

  vector<int> yum;
  for (int i = 0; i < N; i++) {
    if (yummy == A[i]) yum.push_back(i + 1);
  }

  for (int y : yum) {
    for (int b : B) {
      if (y == b) {
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;

  return 0;
}