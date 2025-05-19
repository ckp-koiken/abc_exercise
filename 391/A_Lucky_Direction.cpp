#include <bits/stdc++.h>
using namespace std;

int main() {
  string D;
  cin >> D;

  if (D == "N") cout << "S" << endl;
  if (D == "E") cout << "W" << endl;
  if (D == "W") cout << "E" << endl;
  if (D == "S") cout << "N" << endl;
  if (D == "NE") cout << "SW" << endl;
  if (D == "NW") cout << "SE" << endl;
  if (D == "SE") cout << "NW" << endl;
  if (D == "SW") cout << "NE" << endl;

  return 0;
}