#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  map<string, int> ma;
  for (int i = 0; i < N; i++) {
    string s;
    cin >> s;
    for (char &c : s) {
      c = tolower(c);
    }

    if (!ma.count(s)) {
      ma[s] = 1;
    } else {
      ma[s]++;
    }
  }

  int ans = -1;

  for (auto m : ma) {
    ans = max(ans, m.second);
  }

  cout << ans << endl;
  return 0;
}