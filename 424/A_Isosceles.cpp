#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  bool AB = a == b;
  bool AC = a == c;
  bool BC = b == c;

  if (AB || AC || BC) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}