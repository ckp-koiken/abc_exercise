#include <bits/stdc++.h>
using namespace std;

int main() {
  int H;
  cin >> H;

  int cnt = 0;
  int plant = 0;
  for (;;) {
    if (H < plant) {
      cout << cnt << endl;
      return 0;
    } else {
      plant += pow(2, cnt);
      cnt++;
    }
  }
  return 0;

  // another answer
  // while文で1日ごとの高さを求めていく
  // while (plant <= H) {
  //   // cntの数だけ左シフト（2の累乗を表現）
  //   plant += 1 << cnt; // plant = plant * 2 + 1でも良い
  //   cnt++;
  // }
  // cout << cnt << endl;
}