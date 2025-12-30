#include <bits/stdc++.h>
using namespace std;

int solve() {
  int n;
  cin >> n;
  vector<int> w(n), p(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i] >> p[i];
  }

  vector<int> wp(n);
  for (int i = 0; i < n; i++) {
    wp[i] = w[i] + p[i];
  }
  sort(wp.begin(), wp.end());

  int64_t remain = 0;
  for (int i = 0; i < n; i++) {
    remain += p[i];
  }

  for (int i = 0; i < n; i++) {
    remain -= wp[i];
    if (remain < 0) return i;
  }
  return n;
}

int main() {
  int T;
  cin >> T;
  for (int ti = 0; ti < T; ti++) {
    cout << solve() << endl;
  }
  return 0;
}