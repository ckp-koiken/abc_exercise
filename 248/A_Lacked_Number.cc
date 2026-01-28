#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  set<int> se;
  for (char c : S) {
    se.insert(c - '0');
  }

  for (int i = 0; i < 10; i++) {
    if (!se.count(i)) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}