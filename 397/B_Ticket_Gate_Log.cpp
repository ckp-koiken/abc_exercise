#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // TODO: add interpretation
  int ans = 0;
  char target = 'i';
  for (char c : S) {
    if (c == target) {
      target = target == 'i' ? 'o' : 'i';
    } else {
      ans++;
    }
  }
  if (target == 'o') {
    ans++;
  }
  cout << ans << endl;
  return 0;
}