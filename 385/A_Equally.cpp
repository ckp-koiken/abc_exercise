#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;
  if (A == B && B == C) {
    cout << "Yes" << endl;
  } else if (A == B + C || B == A + C || C == A + B) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}