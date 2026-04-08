#include <bits/stdc++.h>
using namespace std;

// 人Aから初めてK枚をN人に配る
// 仮に人1から初めてK枚をN人に配る場合はK % Nで求まる
// 人A分ずらせばよい
int main() {
  int N, K, A;
  cin >> N >> K >> A;

  // KにAを加えて1引く
  int ans = (A + K - 1) % N;

  // 余りが0の場合はちょうどN番目の人
  if (ans == 0) ans = N;

  cout << ans << endl;
  return 0;
}