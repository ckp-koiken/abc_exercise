#include <bits/stdc++.h>
using namespace std;

int main() {
  int v, a, b, c;
  cin >> v >> a >> b >> c;

  while (v >= 0) {
    if ((v -= a) < 0) {
      cout << 'F' << endl;
      return 0;
    }
  
    if ((v -= b) < 0) {
      cout << 'M' << endl;
      return 0;
    }
  
    if ((v -= c) < 0) {
      cout << 'T' << endl;
      return 0;
    }
  }
  return 0;
}