#include <bits/stdc++.h>
using namespace std;

// 浮動小数点型の誤差から正確なbmiが計算できない場合がある
// W/(H/100)^2 >= 25を変形
// 400W >= H^2 を判定すれば良い
int main() {
  int H, W;
  cin >> H >> W;

  if (400 * W >= H * H) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}