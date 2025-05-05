#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N;
  cin >> N;
  int64_t ans = 0;
  
  // 2で割れるだけ割った(a, b)を数える
  // 2で割り切っているので、bは奇数である
  // b \leq \sqrt(\frac{N} / 2^a)
  // つまり2で割り切った後に奇数の数を数えればよい

  // Nの上限から、aは0~59まで
  for (int a = 1; a < 60; a++) {
    int64_t x = N;

    // Nを2でaの回数だけ割る
    for (int i = 0; i < a; i++) {
      x /= 2;
    }

    // 2で割り切ったものとして、xの平方根をとる
    // long doubleの平方根を取るとき、
    // 誤差の関係でsqrtl()を使う
    int64_t m = sqrtl(x); 

    // 整数mまでの奇数の数を数える
    ans += (m + 1) / 2;
  }
  cout << ans << endl;
  return 0;
}