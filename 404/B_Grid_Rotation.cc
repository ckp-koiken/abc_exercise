#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N), T(N);
  for (int i = 0; i < N; i++) cin >> S[i];
  for (int i = 0; i < N; i++) cin >> T[i];

  int ans = 1e9;
  for (int ri = 0; ri < 4; ri++) {
    int now = ri;
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        if (S[i][j] != T[i][j]) now++;
      }
    }
    ans = min(ans, now);

    vector<string> ns = S;
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        ns[j][N - 1 - i] = S[i][j];
      }
    }
    S = ns;
  }

  cout << ans << endl;
  return 0;
}