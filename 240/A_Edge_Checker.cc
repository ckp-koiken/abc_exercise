#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (a == 10 || b == 10) {
    if (abs(a - b) == 9) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  if (abs(a - b) == 1) {
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;

  return 0;
}