#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  vector<int> key(26);
  for (int i = 0; i < 26; i++) {
    key.at(S.at(i) - 'A') = i;
  }

  int ans = 0;
  for (int i = 0; i < 25; i++) {
    ans += abs(key.at(i) - key.at(i + 1));
  }

  cout << ans << endl;
  return 0;
}