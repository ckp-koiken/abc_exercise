#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int ans = 0;
  for (int i = 0; i < N - 2; i++) {
    if (S.at(i) == '#' && S.at(i + 2) == '#' && S.at(i + 1) == '.') {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}