#include <bits/stdc++.h>
using namespace std;

int main() {
  int W, B;
  cin >> W >> B;

  W *= 1000;
  int ans = W / B + 1;

  cout << ans << endl;
  return 0;
}