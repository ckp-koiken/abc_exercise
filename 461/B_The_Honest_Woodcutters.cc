#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N + 1);
  for (int i = 1; i <= N; i++) cin >> A[i];

  vector<int> B(N + 1);
  for (int i = 1; i <= N; i++) cin >> B[i];

  bool ok = true;
  for (int i = 1; i <= N; i++) {
    if (i != B[A[i]]) ok = false;
  }

  cout << (ok ? "Yes" : "No") << endl;

  return 0;
}