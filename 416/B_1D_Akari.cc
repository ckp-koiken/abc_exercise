#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int n = (int)S.size();
  vector<char> T(n);

  for (int i = 0; i < n; i++) {
    if (S[i] == '#') {
      cout << '#';
    } else if (i == 0 || S[i - 1] == '#') {
      cout << 'o';
    } else {
      cout << '.';
    }
  }

  cout << '\n';
  return 0;
}