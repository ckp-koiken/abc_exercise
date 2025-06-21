#include <bits/stdc++.h>
using namespace std;

int main() {
  int ans = 0;
  for (int i = 1; i <= 12; i++) {
    string S;
    cin >> S;
    if (S.size() == i) ans++;
  }
  cout << ans << endl;
  return 0;
}