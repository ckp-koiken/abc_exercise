#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> P(N);
  string ans = "Yes";

  for (int i = 0; i < N; i++) {
    cin >> P[i];
    if (i / 10 != (P[i] - 1) / 10) {
      ans = "No";
    }
  }

  cout << ans << endl;
  return 0;
}