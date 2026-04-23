#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> p(n);
  vector<vector<int>> f(n);

  for (int i = 0; i < n; i++) {
    int c;
    cin >> p[i] >> c;
    f[i] = vector<int>(c);

    for (int j = 0; j < c; j++) {
      cin >> f[i][j];
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (i != j) {
        if (p[i] < p[j]) continue;
        bool ok = true;
        for (int e : f[i]) {
          if (find(f[j].begin(), f[j].end(), e) == f[j].end()) ok = false;
        }
        if (!ok) continue;
        if (p[i] == p[j] && f[i] == f[j]) continue;
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  cout << "No" << endl;
  return 0;
}