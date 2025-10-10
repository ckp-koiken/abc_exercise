#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t A, B, ans;
  cin >> A >> B;

  if (A % B == 0) {
    ans = A / B;
  } else {
    ans = A / B + 1;
  }

  cout << ans << endl;

  return 0;
}
