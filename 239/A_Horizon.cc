#include <bits/stdc++.h>
using namespace std;

int main() {
  double H;
  cin >> H;
  
  double ans = sqrt(H * (12800000 + H));
  
  // printf("%.9lf\n", ans);
  cout << setprecision(15) << ans << endl;
  return 0;
}