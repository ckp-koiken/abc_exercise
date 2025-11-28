#include <bits/stdc++.h>
using namespace std;
const int mod=998244353;

int main() {
  int64_t A, B, C, D, E, F;
  cin >> A >> B >> C >> D >> E >> F;

  int64_t x, y, ans;

  // 剰余計算を応用する
  // (A * B) % M = ((A % M) * (A % M)) % M
  x = ((A % mod) * (B % mod)) % mod;
  x = (x * (C % mod)) % mod;
  y = ((D % mod) * (E % mod)) % mod;
  y = (y * (F % mod)) % mod;
  
  // 先に余りを取っているので差を取ると負の数になる可能性がある
  // 割る数modを足して余りを取ることで解決
  ans = (x + mod - y) % mod;

  cout << ans << endl;
  return 0;
}