#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  string S;
  cin >> N >> K >> S;

  int cnt = 0;
  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (S.at(i) == 'O') {
      cnt++;
      if (cnt == K) {
        cnt = 0;
        ans++;
      }
    } else if (cnt < K && S.at(i) == 'X') {
      cnt = 0;
    }
  }

  cout << ans << endl;
  return 0;
}