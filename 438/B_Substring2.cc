#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  string S, T;
  cin >> N >> M >> S >> T;

  int ans = 1000000000;
  for (int st = 0; st < N - M + 1; st++) {
    int res = 0;
    for (int i = 0; i < M; i++) {
      res += (((int)S[st + i] - (int)T[i]) + 10) % 10;
    }
    ans = min(ans , res);
  }

  cout << ans << endl;
  return 0;
}