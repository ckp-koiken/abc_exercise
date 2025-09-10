#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> w(n), x(n);
  for (int i = 0; i < n ; i++) {
    cin >> w.at(i) >> x.at(i);
  }

  int ans = 0;
  for (int t = 0; t < 24; t++) {
    int now = 0;
    for (int i = 0; i < n; i++) {
      int y = (x.at(i) + t) % 24;
      if (y >= 9 && y < 18) {
        now += w.at(i);
      }
    }
    ans = max(ans, now);
  }
  cout << ans << endl;
  return 0;
}