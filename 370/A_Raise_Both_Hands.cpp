#include <bits/stdc++.h>
using namespace std;

int main() {
  int L, R;
  cin >> L >> R;

  if (L == R) {
    cout << "Invalid" << endl;
  } else if (L == 1) {
    cout << "Yes" << endl;
  } else if (R == 1) {
    cout << "No" << endl;
  }
  return 0;
}