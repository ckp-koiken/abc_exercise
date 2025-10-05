#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> A(64);
  for (int &a : A) cin >> a;

  uint64_t ans = 0;
  for (int i = 0; i < 64; i++) {
    if (A[i] == 0) {
      ans += 0;
    } else {
      int64_t two = 1;
      for (int j = 0; j < i; j++) two *= 2;
      ans += two;
    }

  }

  cout << ans << endl;
  return 0;
}
