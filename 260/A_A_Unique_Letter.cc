#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  map<char, int> ma;
  for (char c : S) {
    ma[c]++;
  }

  for (auto m : ma) {
    if (m.second == 1) {
      cout << m.first << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}
