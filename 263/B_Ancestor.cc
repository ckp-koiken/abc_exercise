#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> p(n);
  for (int i = 1; i < n; i++) {
    cin >> p[i];
    p[i]--;
  }

  int k = n - 1;
  int ans = 0;
  while (k != 0) {
    k = p[k];
    ans++;
  }

  cout << ans << endl;
  return 0;
}