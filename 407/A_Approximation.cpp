#include <bits/stdc++.h>
using namespace std;

int main() {
  double A, B;
  // int A, B;  // 整数で受け取ってからキャストするのでも良い
  cin >> A >> B;

  double ans = round(A / B);
  cout << ans << endl;
  // cout << round(static_cast<double>(A) / B) << endl;
  return 0;
}
