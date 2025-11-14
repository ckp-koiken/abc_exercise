#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<string> S(N);
  for (int i = 0; i < N; i++) cin >> S[i];

  int ans = 0;
  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {

      bool can_solve = true;
      for (int k = 0; k < M; k++) {
        if (!(S[i][k] == 'o' || S[j][k] == 'o')) can_solve = false;
      }

      if (can_solve) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}