#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t X;
  cin >> X;
  // 正の数を割り算（/）をすると切り捨てになる
  // 逆に負の数を割り算すると切り上げになる

  // 10で割ったときの最小の整数を求めたい
  int64_t ans;
  if (X >= 0) {
    // Xが正の時、切り上げにしたいのでXに9を足す
    ans = (X + 9) / 10;
  } else {
    // Xが負の時はそのままでよい
    ans = X / 10;
  }

  cout << ans << endl;

  return 0;
}