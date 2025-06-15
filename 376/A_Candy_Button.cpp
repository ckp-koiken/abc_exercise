#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, C;
  cin >> N >> C;

  int ans = 1, pre;
  cin >> pre;
  for (int i = 1; i < N; i++) {
    int T;
    cin >> T;
    if (T - pre >= C) {
      ans++;
      pre = T;
    }
  }

  cout << ans << endl;

  return 0;
}