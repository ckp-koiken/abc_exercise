#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t X;
  cin >> X;

  int64_t ans;
  if (X >= 0) {
    ans = (X + 9) / 10;
  } else {
    ans = X / 10;
  }

  cout << ans << endl;
  
  return 0;
}