#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> dice_1(6);
  for (int i = 0; i < 6; i++) cin >> dice_1[i];
  vector<int> dice_2(6);
  for (int i = 0; i < 6; i++) cin >> dice_2[i];
  vector<int> dice_3(6);
  for (int i = 0; i < 6; i++) cin >> dice_3[i];

  int cnt = 0;
  for (int i = 0; i < 6; i++) {
    for (int j = 0; j < 6; j++) {
      for (int k = 0; k < 6; k++) {
        if ((dice_1[i] == 4 && dice_2[j] == 5 && dice_3[k] == 6) ||
            (dice_1[i] == 4 && dice_2[j] == 6 && dice_3[k] == 5) ||
            (dice_1[i] == 6 && dice_2[j] == 4 && dice_3[k] == 5) ||
            (dice_1[i] == 6 && dice_2[j] == 5 && dice_3[k] == 4) ||
            (dice_1[i] == 5 && dice_2[j] == 4 && dice_3[k] == 6) ||
            (dice_1[i] == 5 && dice_2[j] == 6 && dice_3[k] == 4)) {
          cnt++;
        }
      }
    }
  }

  double ans = cnt / 216.0;
  cout << fixed << setprecision(10) << ans << endl;

  return 0;
}