#include <bits/stdc++.h>
using namespace std;

// TODO: TLE
// 10^18まで全探索すると計算量が足りない
// 要修正
int main() {
  int64_t L, R;
  cin >> L >> R;

  int ans = 0;
  for (int64_t i = L; i <= R; i++) {
    string s = to_string(i);
    int check = 0;
    for (int j = 1; j < s.size(); j++) {
      if ((s.at(0) - '0') > (s.at(j) - '0')) check++;
    }
    if (check == s.size() - 1) ans++;
  }
  cout << ans << endl;
  return 0;
}