#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  if (S.at(0) == 'R' && (S.at(1) == 'M' || S.at(2) == 'M')) {
    cout << "Yes" << endl;
  } else if (S.at(1) == 'R' && S.at(2) == 'M') {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}

// another answer
// RとMの場所を調べてindexの番号を比較する
// int main() {
//   string s;
//   cin >> s;
//   int pos_r = -1, pos_m = -1;
//   for (int i = 0; i < 3; i++) {
//     if (s.at(i) == 'R') {
//       pos_r = i;
//     }
//     if (s.at(i) == 'M') {
//       pos_m = i;
//     }
//   }

//   if (pos_r < pos_m) {
//     cout << "Yes" << endl;
//   } else {
//     cout << "No" << endl;
//   }

//   return 0;
// }