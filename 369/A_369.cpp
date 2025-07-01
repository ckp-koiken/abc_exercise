#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  int ans = 0;
  for (int i = -10000; i < 10000; i++) {
    if ((A - i) == (B - A)) {
      ans++;
    } else if ((i - A) == (B - i)) {
      ans++;
    } else if ((B - A) == (i - B)) {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}