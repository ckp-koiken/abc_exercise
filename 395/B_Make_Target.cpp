#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<string> s(n, string(n, '.'));
  for (int l = 0; l < n; l++) {
    int r = n - 1 - l;
    if (l > r) {
      continue;
    }

    char c = '#';
    if (l % 2) {
      c = '.';
    }
    for (int i = l; i <= r; i++) {
      for (int j = l; j <= r; j++) {
        s.at(i).at(j) = c;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    cout << s.at(i) << endl;
  }
  return 0;
}