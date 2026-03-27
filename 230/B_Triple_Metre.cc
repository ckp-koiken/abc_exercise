#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  string T = "";
  for (int i = 0; i < 1e5; i++) {
    T += "oxx";
  }

  for (int i = 0; i < (int)T.size(); i++) {
    string R = T.substr(i, (int)S.size());

    if (S == R) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}