#include <bits/stdc++.h>
using namespace std;

int main() {
  double X;
  cin >> X;
  if (X >= 38.0) {
    cout << 1 << endl;
  } else if (X >= 37.5) {
    cout << 2 << endl;
  } else {
    cout << 3 << endl;
  }
  return 0;
}