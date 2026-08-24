#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> L(N);
  for (int i = 0; i < N; i++) cin >> L[i];

  int64_t ans = 1e6;
  for (int i = 0; i < N; i++) {
    int64_t tmp1 = 0;
    int64_t tmp2 = 0;

    for (int j = 0; j < i; j++) {
      tmp1 += L[j];
    }

    for (int k = i; k < N; k++) {
      tmp2 += L[k];
    }

    int64_t diff = abs(tmp1 - tmp2);
    ans = min(ans, diff);

  }

  cout << ans << endl;
  return 0;
}