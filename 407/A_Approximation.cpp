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

// another answer
// A/Bに最も近い整数はA/B+1/2以下の最大の整数
// つまり2A+B/2B
// 後は整数部分以外を切り捨てる

// cout << (2 * A + B) / (2 * B) << endl;
