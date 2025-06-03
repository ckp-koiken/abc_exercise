#include <bits/stdc++.h>
using namespace std;

int main() {
  double X, Y;
  cin >> X >> Y;

  vector<double> dice = {1, 2, 3, 4, 5, 6};
  int num = 0;
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      double sum = dice.at(i) + dice.at(j);
      double ab = abs(dice.at(i) - dice.at(j));
      if (sum >= X || ab >= Y) num++;
    }
  }

  // setprecisionで浮動小数点を出力する精度を設定する
  cout << setprecision(10) << static_cast<double>(num) / 36.0 << endl;
  return 0;
}

// another answer
// サイコロのベクタを作らなくてもintのfor文でできる
// doubleでサイコロ作る必要全くなかった
// for (int i = 1; i <= 6; i++) {
//   for (int j = 1; j <= 6; j++) {
//     int sum = i + j;
//     int ab = abs(i - j);
//     if (sum >= X || ab >= Y) num++;
//   }
// }