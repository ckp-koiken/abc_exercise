#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  string T = "";
  for (char c : S) {
    if (c >= 48 && c <= 59) {
      T.push_back(c);
    }
  }

  cout << T << endl;
  return 0;
}