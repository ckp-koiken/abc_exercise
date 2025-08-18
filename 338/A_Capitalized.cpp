#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  if (!isupper(S.at(0))) {
    cout << "No" << endl;
    return 0;
  }

  for (int i = 1; i < (int)S.size(); i++) {
    if (isupper(S.at(i))) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}