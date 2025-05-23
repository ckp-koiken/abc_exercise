#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D;
  cin >> N >> D;
  vector<int> T(N);
  vector<int> L(N);
  for (int i = 0; i < N; i++) {
    cin >> T.at(i) >> L.at(i);
  }

  for (int k = 1; k <= D; k++) {
    int ans = 0;
    for (int i = 0; i < N; i++) {
      ans = max(ans, T.at(i) * (L.at(i) + k));
    }
    cout << ans << endl;
  }

  return 0;
}