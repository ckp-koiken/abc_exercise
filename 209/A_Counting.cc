#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  int ans = B - A + 1;

  if (ans >= 0) {
    cout << ans << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}