#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, D;
  cin >> A >> B >> C >> D;

  if (C >= A) {
    if (D >= B) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
    return 0;
  }

  cout << "No" << endl;
  return 0;
}