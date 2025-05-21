#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t X;
  cin >> X;
  int N = 1;
  while (X != 1) {
    // Xが階乗の数であることがわかってるので、
    // 割り切れる条件は不要
    X /= N;
    N++;
  }
  cout << N - 1 << endl;
  return 0;
}

// another answer
// 階乗を計算する関数
// int64_t fact(int n) {
//   int64_t res = 1;
//   for (int i = 1; i <= n; i++) {
//     res *= i;
//   }
//   return res;
// }
//
// int main() {
//   int64_t x;
//   cin >> x;
//   // 単純にnを1ずつ増やして掛け算を繰り返し、
//   // xと等しくなったらプログラムを止める
//   int n = 1;
//   for(;;) {  //  条件から最大値が20!なので20回ループするのでもいい
//     if (fact(n) == x) {
//       cout << n << endl;
//       return 0;
//     }
//     n++;
//   }
//   return 0;
// }