#include <bits/stdc++.h>
using namespace std;

int main() {
  int H, W, R, C;
  cin >> H >> W >> R >> C;

  H--, W--, R--, C--;

  int ans = 0;

  if ((R + 1) <= H) ans++;
  if ((C + 1) <= W) ans++;
  if ((R - 1) >= 0) ans++;
  if ((C - 1) >= 0) ans++;

  cout << ans << endl;
  
  return 0;
}

// another answer
// R, Cの左側にマスが存在する条件はC != 1
// R, Cの右側にマスが存在することは C != W
// 上下も同様
// int main() {
//   int h, w, r, c;
//   cin >> h >> w >> r >> c;
//
//   int ans = 0;
//   if (c != 1) ans++;
//   if (c != w) ans++;
//   if (r != 1) ans++;
//   if (r != h) ans++;
//
//   cout << ans << endl;
//
//   return 0;
// }
