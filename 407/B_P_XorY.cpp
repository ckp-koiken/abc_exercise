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

  cout << setprecision(10) << static_cast<double>(num) / 36.0 << endl;
  return 0;
}