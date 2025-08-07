#include <bits/stdc++.h>
using namespace std;

int main() {
  int W, B;
  cin >> W >> B;

  int N = W + B;
  string s = "wbwbwwbwbwbw";
  int m = s.size();

  for (int si = 0; si < m; si++) {
    int cnt = 0;
    for (int i = 0; i < N; i++) {
      if (s.at((si + i) % m) == 'w') {
        cnt++;
      }
    }
    if (cnt == W) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}