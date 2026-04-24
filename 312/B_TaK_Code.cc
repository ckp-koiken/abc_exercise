#include <bits/stdc++.h>
using namespace std;

bool check(vector<string> s) {
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (s[i][j] != '#') {
        return false;
      }
    }
  }

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      if (s[8 - i][8 - j] != '#') {
        return false;
      }
    }
  }

  for (int i = 0; i < 4; i++) {
    for (int j = 0; j < 4; j++) {
      if (i < 3 && j < 3) continue;
      
      if (s[i][j] != '.') {
        return false;
      }

      if (s[8 - i][8 - j] != '.') {
        return false;
      }
    }
  }

  return true;
}

int main() {
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  for (int i = 0; i < n; i++) cin >> s[i];

  for (int si = 0; si < n - 8; si++) {
    for (int sj = 0; sj < m - 8; sj++) {
      vector<string> t(9);
      for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
          t[i] += s[si + i][sj + j];
        }
      }
      if (check(t)) {
        cout << si + 1 << " " << sj + 1 << endl;
      }
    }
  }
  return 0;
}