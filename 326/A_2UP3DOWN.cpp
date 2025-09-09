#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y;
  cin >> X >> Y;

  if (X < Y) {
    int diff = Y - X;
    if (diff > 2) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  } else {
    int diff = X - Y;
    if (diff > 3) {
      cout << "No" << endl;
    } else {
      cout << "Yes" << endl;
    }
  }
  return 0;
}