#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y;
  cin >> X >> Y;

  int ans = 0;
  while (Y > X) {
    X += 10;
    ans++;
  }

  cout << ans << endl;
  return 0;
}