#include <bits/stdc++.h>
using namespace std;

// MEMO: マルチテストケースではテストケースごとに問題を解く部分を関数にすると良い
void solve() {
  int N;
  cin >> N;
  int ans = 0;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    if (a % 2 == 1) ans++;
  }
  cout << ans << endl;
}

int main() {
  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    solve();
  }
  return 0;
}