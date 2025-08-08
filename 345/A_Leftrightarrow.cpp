#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int m = S.size();

  for (int i = 1; i < m - 1; i++) {
    if (S.at(i) != '=') {
      cout << "No" << endl;
      return 0;
    }
  }

  if (S.at(0) == '<' && S.at(m - 1) == '>') {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}