#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;

  int n = (int)S.size();
  int m = (int)T.size();

  for (int i = 0; i < n - m + 1; i++) {
    string tmp = S.substr(i, m);

    if (tmp == T) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}