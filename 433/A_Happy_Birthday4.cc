#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y, Z;
  cin >> X >> Y >> Z;

  int cnt = 0;
  while(true) {
    if (X / Y == Z && X % Y == 0) {
      cout << "Yes" << endl;
      return 0;
    } else {
      X++;
      Y++;
      cnt++;
    }

    if (cnt > 1000) {
      cout << "No" << endl;
      return 0;
    }
  }
  return 0;
}

// another answer
// X + k = Z(Y + k)
// k = (X - YZ) / (Z - 1)
// と変形できることを利用する

// int main() {
//   int x, y, z;
//   cin >> x >> y >> z;

//   if ((x - y * z) % (z - 1) == 0 && x - y * z >= 0) {
//     cout << "Yes" << endl;
//   } else {
//     cout << "No" << endl;
//   }
//   return 0;
// }