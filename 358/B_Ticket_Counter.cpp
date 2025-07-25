#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N >> A;

  int pre = 0;
  for (int i = 0; i < N; i++) {
    int T;
    cin >> T;
    int ans = max(pre, T) + A;
    cout << ans << endl;
    pre = ans;
  }

  return 0;
}