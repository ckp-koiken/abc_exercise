#include <bits/stdc++.h>
using namespace std;

int main() {
  int Y;
  cin >> Y;

  if (Y % 4 != 0) { 
    cout << 365 << endl;
    return 0;
  }

  if (Y % 4 == 0 && Y % 100 != 0) {
    cout << 366 << endl;
    return 0;
  }

  if (Y % 100 == 0 && Y % 400 != 0) {
    cout << 365 << endl;
    return 0;
  }

  if (Y % 400 == 0) {
    cout << 366 << endl;
    return 0;
  }
  
  return 0;
}