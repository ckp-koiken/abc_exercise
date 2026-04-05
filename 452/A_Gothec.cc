#include <bits/stdc++.h>
using namespace std;

int main() {
  int M, D;
  cin >> M >> D;

  if (M % 2 != 1 || M > 9) {
    cout << "No" << endl;
    return 0;
  }

  if (M == 1) {
    if (D != 7) {
      cout << "No" << endl;
      return 0;
    }
  }

  if (M >= 3) {
    if (D != M) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}