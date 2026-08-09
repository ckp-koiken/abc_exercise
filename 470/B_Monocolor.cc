#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> C(N);
  for (int i = 0; i < N; i++) cin >> C[i];

  int ans = 1000;

  for (int c = 1; c <= N; c++) {
    int tmp = 0;
    for (int i = 0; i < N; i++) {
      if (C[i] != c) tmp++;
    }
    ans = min(ans, tmp);
  }

  cout << ans << endl;

  // another answer
  // ボールの個数から最も多い色の数を引いたものでもよい
  // vector<int> cnt(N);
  // for (int i = 0; i < N; i++) {
  //   cnt[C[i] - 1]++;
  // }

  // cout << N - *max_element(cnt.begin(), cnt.end()) << endl;

  return 0;
}