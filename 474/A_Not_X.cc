#include <bits/stdc++.h>
using namespace std;

int main() {
  int X;
  cin >> X;

  for (int i = 1; i <= 3; i++) {
    if (i != X) {
      cout << i << endl;
      return 0;
    }
  }
  return 0;
}