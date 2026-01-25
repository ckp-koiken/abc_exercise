#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int ans = 0;
  for (char c : S) {
    if (c == 'i' || c == 'j') ans++;
  }

  cout << ans << endl;

  // another answer
  // iとjの数を数え上げてもよい
  // cout << count(S.begin(), S.end(), 'i') + count(S.begin(), S.end(), 'j') << endl;
  return 0;
}
