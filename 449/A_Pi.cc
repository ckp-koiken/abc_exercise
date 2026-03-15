#include <bits/stdc++.h>
using namespace std;

const double PI = acos(-1);

int main() {
  double D;
  cin >> D;

  double ans = PI * (D / 2) * (D / 2);

  // MEMO: cmathライブラリのM_PIを使っても良い
  // double ans = M_PI * (D / 2) * (D / 2);
  // 上をまとめてもOK
  // double ans = M_PI * D * D / 4;

  cout << fixed << setprecision(10) << ans << endl;
  return 0;
}