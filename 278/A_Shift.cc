#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  for (int i = 0; i < K; i++) {
    A.erase(A.begin());
    A.push_back(0);
  }

  for (int a : A) {
    cout << a << " ";
  }

  cout << '\n';
  return 0;
}