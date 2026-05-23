#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, bool> ma;
  ma["ABC"] = false;
  ma["ARC"] = false;
  ma["AGC"] = false;
  ma["AHC"] = false;

  for (int i = 0; i < 3; i++) {
    string s;
    cin >> s;
    ma[s] = true;
  }

  for (auto m : ma) {
    if (!m.second) cout << m.first << endl;
  }
  return 0;
}