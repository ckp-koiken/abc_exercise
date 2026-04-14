#include <bits/stdc++.h>
using namespace std;

int main() {
  double X;
  cin >> X;

  int xx = X * 1000;

  double ans = xx / 1000.0;

  cout << ans << endl;
  return 0;
}

// another answer
// C++の場合実数を受け取ってそのままcoutすれば勝手に0が消える
// 過剰な0を出力しない仕組みになっている

// int main() {
//   double x;
//   cin >> x;

//   cout << x << endl;
//   return 0;
// }