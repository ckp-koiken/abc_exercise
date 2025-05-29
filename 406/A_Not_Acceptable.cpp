#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  if (A > C) {
    cout << "Yes" << endl;
    return 0;
  }

  if (A == C) {
    if (B > D) {
      cout << "Yes" << endl;
    } else if (B < D) {
      cout << "No" << endl;
    }
    return 0;
  }

  if (A < C) {
    cout << "No" << endl;
    return 0;
  }

  // another answer
  // int time_d = 60 * A + B;
  // int time_s = 60 * C + D;
  // if (time_d > time_s) {
  //   cout << "Yes" << endl;
  // } else {
  //   cout << "No" << endl;
  // }

  return 0;

}
