#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  int64_t m = 1;  // 桁数
  for (int i = 0; i < K; i++) {
    m *= 10;
  }

  int64_t x = 1;
  // x * aをやるとint64_tをオーバーフローする
  for (int i = 0; i < N; i++) {
    int64_t a;
    cin >> a;
    // m <= x * aを変形
    // m / x <= a だとm / x が小数になって切り捨てになり不都合
    // m - 1としてaと"<"で比較
    if ((m - 1) / x < a) {
      x = 1;
    } else {
      x *= a;
    }
  }
  cout << x << endl;
  return 0;
}