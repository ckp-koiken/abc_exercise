#include <bits/stdc++.h>
using namespace std;

int main() {
  map<char, int> ma;
  ma['A'] = 0;
  ma['B'] = 3;
  ma['C'] = 4;
  ma['D'] = 8;
  ma['E'] = 9;
  ma['F'] = 14;
  ma['G'] = 23;

  char p, q;
  cin >> p >> q;

  if (q > p) {
    cout << ma[q] - ma[p] << endl;
  } else {
    cout << ma[p] - ma[q] << endl;
  }

  return 0;
}
