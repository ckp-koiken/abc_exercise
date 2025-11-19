#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> S(N);
  for (int i = 0; i < N; i++) cin >> S[i];

  vector<int> A;
  A.push_back(S[0]);

  for (int i = 0; i < N - 1; i++) {
    A.push_back(S[i + 1] - S[i]);
  }

  for (int a : A) {
    cout << a << " ";
  }

  cout << '\n';
  return 0;
}