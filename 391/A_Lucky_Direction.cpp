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

// another answer
  // Dを1文字ずつ反転させる
  // string ans = "";
  // for (char d : D) {
  //   if (d == 'N') {
  //     ans += 'S';
  //   } else if (d == 'S') {
  //     ans += 'N';
  //   } else if (d == 'E') {
  //     ans += 'W';
  //   } else if (d == 'W') {
  //     ans += 'E';
  //   }
  // }
  // cout << ans << endl;