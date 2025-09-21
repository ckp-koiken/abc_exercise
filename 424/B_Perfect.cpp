#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, K;
  cin >> N >> M >> K;

  int total = (1 + M) * M / 2;
  vector<int> Q(N + 1);
  for (int i = 0; i < K; i++) {
    int A, B;
    cin >> A >> B;
    Q.at(A) += B;
    if (Q.at(A) == total) {
      cout << A << " ";
    }
  }
  cout << endl;
  return 0;
}