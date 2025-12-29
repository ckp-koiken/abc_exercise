#include <bits/stdc++.h>
using namespace std;

int main() {
  int Y;
  cin >> Y;

  int res = Y % 4;

  if (res <= 1) {
    cout << Y + 2 - res << endl;
  } else if (res == 2) {
    cout << Y << endl;
  } else if (res == 3) {
    cout << Y + 4 + 2 - res << endl;
  }

  return 0;
}