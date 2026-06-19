#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, X, Y;
  cin >> N >> A >> X >> Y;

  int ans;
  if (N > A) {
    ans = A * X + (N - A) * Y;
  } else {
    ans = N * X;
  }

  cout << ans << endl;
  return 0;
}