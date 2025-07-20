#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  if (S.at(0) == 'R' && (S.at(1) == 'M' || S.at(2) == 'M')) {
    cout << "Yes" << endl;
  } else if (S.at(1) == 'R' && S.at(2) == 'M') {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}