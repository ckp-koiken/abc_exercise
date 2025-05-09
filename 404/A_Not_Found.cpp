#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  
  for (char c = 'a'; c <= 'z'; c++) {
    bool ok = true;
    for (int i = 0; i < S.size(); i++) {
      if (S.at(i) == c) {
        ok = false;
      }
    }
    if (ok) {
      cout << c << endl;
      return 0;
    }
  }

  return 0;
}