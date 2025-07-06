#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C;
  cin >> A >> B >> C;

  if (B < C) {
    if (B < A && A < C) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  } else {
    if (C < A && A < B) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  return 0;
}