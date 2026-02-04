#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  if (A > C) {
    cout << "Aoki" << endl;
  }

  if (A < C) {
    cout << "Takahashi" << endl;
  }

  if (A == C) {
    if (B > D) {
      cout << "Aoki" << endl;
    } else {
      cout << "Takahashi" << endl;
    }
  }
  return 0;
}