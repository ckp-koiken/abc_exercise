#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, C;
  cin >> X >> C;

  int cnt = X / (1000 + C);
  int ans = cnt * 1000;

  cout << ans << endl;
  return 0;
}