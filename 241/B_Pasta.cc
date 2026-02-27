#include <bits/stdc++.h>
using namespace std;

int main() {
  int M, N;
  cin >> M >> N;
  vector<int> A(M);
  vector<int> B(N);
  for (int i = 0; i < M; i++) cin >> A[i];
  for (int i = 0; i < N; i++) cin >> B[i];

  map<int, int> pasta;
  for (int i = 0; i < M; i++) {
    pasta[A[i]]++;
  }

  for (int i = 0; i < N; i++) {
    if (pasta.count(B[i]) && pasta[B[i]] > 0) {
      pasta[B[i]]--;
    } else {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;

  return 0;
}