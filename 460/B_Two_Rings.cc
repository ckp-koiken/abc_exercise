#include <bits/stdc++.h>
using namespace std;

long long sq(long long x) {
  return x * x;
}

// 2円の中心距離をDとして2円が共有点を持つ条件は
// |r1 - r2| <= D <= R1 + R2
// |r1 - r2| <= \sqrt((x1-x2)^2 + (y1-y2)^2) <= R1 + R2
// ルートを取ると誤差が出るので2乗したもので検証
// 大きい数値を2乗する関数を作っておくと便利
int main() {
  int T;
  cin >> T;

  for (int i = 0; i < T; i++) {
    long long x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    long long L = sq(r1 - r2);
    long long M = sq(x1 - x2) + sq(y1 - y2);
    long long R = sq(r1 + r2);

    if (L <= M && M <= R) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}