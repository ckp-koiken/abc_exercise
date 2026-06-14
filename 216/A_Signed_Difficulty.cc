#include <bits/stdc++.h>
using namespace std;

int main() {
  double num;
  cin >> num;

  int x = num;
  int y = (num - x) * 10;

  string sign = " ";
  
  if (y <= 2 && y >= 0) {
    sign = '-'; 
  } else if (y >= 7 && y <= 9) {
    sign = '+';
  }

  cout << x << sign << endl;

  return 0;
}