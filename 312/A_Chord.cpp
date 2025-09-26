#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  vector<string> data = {"ACE", "BDF", "CEG", "DFA", "EGB", "FAC", "GBD"};
  for (auto s : data) {
    if (S == s) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}