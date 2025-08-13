#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int n = S.size();

  double ans = 0;

  for (int r = 0; r < n; r++) {
    for (int l = 0; l < r - 1; l++) {
      if (S.at(l) != 't') continue;
      if (S.at(r) != 't') continue;
      int cnt = 0;
      int len = r - l - 1;
      for (int i = l + 1; i < r; i++) {
        if (S.at(i) == 't') cnt++;
      }
      double tmp = (double)cnt / len;
      ans = max(tmp, ans);
    }
  }
  
  printf("%.15lf\n", ans);
  return 0;
}
