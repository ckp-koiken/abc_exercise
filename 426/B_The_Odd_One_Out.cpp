#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  
  map<char, int> ma;
  for (char c : S) {
    if (ma.count(c)) {
      ma[c]++;
    } else {
      ma[c] = 1;
    }
  }

  for (auto p : ma) {
    if (p.second == 1) {
      cout << p.first << endl;
      return 0;
    }
  }
  return 0;
}
