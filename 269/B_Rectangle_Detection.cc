#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> S(10);
  for (int i = 0; i < 10; i++) cin >> S[i];

  int A, B, C, D;
  vector<int> horizon;
  vector<int> vertical;

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

  // another answer
  // A, B, C, Dを大小比較して更新しつづければ配列を使わないですむ
  // A = 100, B = -100, C = 100, D = -100;

  // for (int i = 0; i < 10; i++) {
  //   for (int j = 0; j < 10; j++) {
  //     if (S[i][j] == '#') {
  //       A = min(A, i + 1);
  //       B = max(B, i + 1);
  //       C = min(C, j + 1);
  //       D = max(D, j + 1);
  //     }
  //   }
  // }
  // cout << A << " " << B << endl;
  // cout << C << " " << D << endl;

  return 0;
}