#include <bits/stdc++.h>
using namespace std;

int64_t f(int64_t R, int64_t M) {
  return R / M;
}

int main() {
  int64_t A, M, L, R;
  cin >> A >> M >> L >> R;

  L -= A;
  R -= A;

  if (L < 0) {
    int64_t X = -L / M + 1;
    L += X * M;
    R += X * M;
  }

  int64_t ans = f(R, M) - f(L - 1, M);
  cout << ans << endl;
  return 0;
}