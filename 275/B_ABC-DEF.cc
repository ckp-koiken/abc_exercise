#include <bits/stdc++.h>
using namespace std;
const int mod=998244353;

int main() {
  int64_t A, B, C, D, E, F;
  cin >> A >> B >> C >> D >> E >> F;

  int64_t x, y, ans;

  x = ((A % mod) * (B % mod)) % mod;
  x = (x * (C % mod)) % mod;
  y = ((D % mod) * (E % mod)) % mod;
  y = (y * (F % mod)) % mod;
  
  ans = (x + mod - y) % mod;
  
  cout << ans << endl;
  return 0;
}