#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, m;
  cin >> n >> m;

  vector<vector<bool>> d(n, vector<bool>(n));

  for (int mi = 0; mi < m; mi++) {
    int k;
    cin >> k;
    vector<int> x(k);

    for (int i = 0; i < k; i++) {
      cin >> x[i];
    }

    for (int i = 0; i < k; i++) {
      x[i]--;
    }

    for (int i = 0; i < k; i++) {
      for (int j = 0; j < k; j++) {
        d[x[i]][x[j]] = true;
      }
    }
  }

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (!d[i][j]) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  cout << "Yes" << endl;
  return 0;
}