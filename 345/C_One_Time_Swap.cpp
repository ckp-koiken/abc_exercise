#include <bits/stdc++.h>
using namespace std;

int64_t c2(int64_t n) {
  return n * (n - 1) / 2;
}

int main() {
  string S;
  cin >> S;

  int n = S.size();

  int64_t same = 0;
  map<char, int> cnt;
  for (char c : S) cnt[c]++;
  
  for (auto p : cnt) {
    int m = p.second;
    same += c2(m);
  }

  int64_t diff = c2(n) - same;

  int64_t ans = diff;
  if (same) ans++;

  cout << ans << endl;

  return 0;
}