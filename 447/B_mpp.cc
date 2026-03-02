#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  map<char, int> ma;
  for (char c : S) {
    ma[c]++;
  }

  int cnt = 0;
  for (auto m : ma) {
    int tmp = m.second;
    cnt = max(cnt, tmp);
  }

  set<char> se;
  for (auto m : ma) {
    if (m.second == cnt) {
      se.insert(m.first);
    }
  }

  for (char c : S) {
    if (!se.count(c)) cout << c;
  }
  cout << '\n';
  return 0;
}