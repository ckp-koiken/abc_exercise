#include <bits/stdc++.h>
using namespace std;

// 10^k位以下を四捨五入する
// Xを10^kで割る
// Xの1の位（Xを10で割った余り）をmとして
// m <= 4ならXからmを引いてXを10^k倍する（切り捨て）
// m >= 5ならXに10-mを足したのちにXを10^k倍する（切り上げ）

int main() {
  int64_t X;
  int K;
  cin >> X >> K;

  // 10^0を基礎として割る数を設定
  int64_t pow10 = 1;
  for (int i = 0; i < K; i++) {
    // 10^iで割る
    X /= pow10;

    // 10で割ることで1の位mを求める
    int64_t m = (X % 10);

    if (m <= 4) {
      // 1の位が4以下ならmを引く
      X -= m;
    } else {
      // 1の位が5以上なら10-mを足す
      X += (10 - m);
    }

    // Xに割った数をかける
    X *= pow10;

    // ループの終わりに割る数を10倍する
    pow10 *= 10;
  }

  cout << X << '\n';

  return 0;
}