#include <bits/stdc++.h>
using namespace std;

bool isPalindrome(string s) {
  string t = s;
  reverse(t.begin(), t.end());
  return s == t;
}

int main() {
  string s;
  cin >> s;
  int n = s.size();
  int ans = 0;
  
  for (int l = 0; l < n; l++) {
    for (int r = l; r < n; r++) {
      string ns = s.substr(l, r - l + 1);
      if (isPalindrome(ns)) ans = max(ans, r - l + 1);
    }
  }

  cout << ans << endl;
  return 0;
}