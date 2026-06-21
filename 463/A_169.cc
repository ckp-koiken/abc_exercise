#include <bits/stdc++.h>
using namespace std;

// ACが出たがこれは間違い
// int main() {
//   int X, Y;
//   cin >> X >> Y;

//   if (X % 16 == 0 && Y % 9 == 0) {
//     cout << "Yes" << endl;
//   } else {
//     cout << "No" << endl;
//   }
//   return 0;
// }

int main() {
  int x, y;
  cin >> x >> y;

  // x:y = 16:9は9x = 16yということ
  if (x * 9 == y * 16) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}