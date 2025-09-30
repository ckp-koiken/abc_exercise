#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D;
  cin >> N >> D;
  vector<string> S(N);
  for (int i = 0; i < N; i++) {
    cin >> S.at(i);
  }

  int ans = 0, cur = 0;
  for (int j = 0; j < D; j++) {
    int can = 1;
    for (int i = 0; i < N; i++) {
      can &= S.at(i).at(j) == 'o';
    }

    if (can) {
      cur++;
    } else {
      cur = 0;
    }
    ans = max(ans, cur);

  }

  cout << ans << endl;
  return 0;
}
