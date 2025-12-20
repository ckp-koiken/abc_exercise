#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N;
  cin >> N;

  for (int i = 0; i < 998244353; i++) {
    if ((N - i) % 998244353 == 0) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}

// another answer
// 条件を整理すると
// N − x = k * 998244353
// N = k * 998244353 + x
// つまりNを998244353で割った余りを求めれば良い
// ただ、負の数に対する余りが負ににあることがある
// 負の場合は余りが0以上になるように割る数を足す
// int main() {
//   int64_t N;
//   cin >> N;
//   N %= 998244353;
//   if (N < 0) N += 998244353;
//   cout << N << endl;
// }