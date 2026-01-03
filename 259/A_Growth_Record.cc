#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, X, T, D;
  cin >> N >> M >> X >> T >> D;

  if (M >= X && M < N) {
    cout << T << endl;
  } else {
    int ans = T - (X - M) * D;
    cout << ans << endl;
  }

  return 0;
}
