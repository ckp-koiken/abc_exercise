#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<vector<int>> C(n, vector<int>(n));

  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      cin >> C[i][j];
    }
  }

  for (int c = 0; c < n; c++) {
    for (int b = 0; b < c; b++) {
      for (int a = 0; a < b; a++) {
        if (C[a][c] > C[a][b] + C[b][c]) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }

  cout << "No" << endl;
  return 0;
}