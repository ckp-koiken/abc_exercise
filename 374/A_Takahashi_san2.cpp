#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  reverse(S.begin(), S.end());

  if (S.at(0) == 'n' && S.at(1) == 'a' && S.at(2) == 's') {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}