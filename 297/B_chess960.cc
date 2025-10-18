#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int B1, B2, R1, R2, K;
  int tmpB = 0;
  int tmpR = 0;
  for (int i = 0; i < 8; i++) {
    if (S[i] == 'B') {
      if (tmpB == 0) {
        B1 = i + 1;
        tmpB = 1;
      } else {
        B2 = i + 1;
      }
    }

    if (S[i] == 'R') {
      if (tmpR == 0) {
        R1 = i + 1;
        tmpR++;
      } else {
        R2 = i + 1;
      }
    }

    if (S[i] == 'K') K = i + 1;
  }

  bool isBcond = false;
  if ((B1 % 2 == 0 && B2 % 2 == 0) || (B1 % 2 == 1 && B2 % 2 == 1)) {
    isBcond = false;
  } else {
    isBcond = true;
  }

  bool isKcond = false;
  if (R1 < K && K < R2) isKcond = true;

  if (isBcond && isKcond)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}