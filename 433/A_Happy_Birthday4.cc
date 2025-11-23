#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y, Z;
  cin >> X >> Y >> Z;

  int cnt = 0;
  while(true) {
    if (X / Y == Z && X % Y == 0) {
      cout << "Yes" << endl;
      return 0;
    } else {
      X++;
      Y++;
      cnt++;
    }

    if (cnt > 1000) {
      cout << "No" << endl;
      return 0;
    }
  }
  return 0;
}