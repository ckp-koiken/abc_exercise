#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y;
  cin >> X >> Y;

  int month = (X + Y) % 12;
  if (month == 0) month = 12;

  cout << month << endl;
  return 0;
}