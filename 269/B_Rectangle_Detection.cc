#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> S(10);
  for (int i = 0; i < 10; i++) cin >> S[i];

  int A, B, C, D;
  vector<int> horizon;
  vector<int> vertical;

  vector<vector<int>> ans;
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      if (S[i][j] == '#') {
        vertical.push_back(i + 1);
        horizon.push_back(j + 1);
      }
    }
  }

  A = *min_element(vertical.begin(), vertical.end());
  B = *max_element(vertical.begin(), vertical.end());
  C = *min_element(horizon.begin(), horizon.end());
  D = *max_element(horizon.begin(), horizon.end());
  cout << A << " " << B << endl;
  cout << C << " " << D << endl;
  return 0;
}