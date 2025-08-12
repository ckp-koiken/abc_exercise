#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  vector<int> B(M);
  for (int i = 0; i < M; i++) {
    cin >> B.at(i);
  }

  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      if (B.at(i) == A.at(j)) {
        A.at(j) = -1;
        break;
      }
    }
  }

  for (int a : A) {
    if (a != -1) cout << a << " ";
  }
  cout << endl;
  return 0;
}