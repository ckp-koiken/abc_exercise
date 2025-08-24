#include <bits/stdc++.h>
using namespace std;

int main() {
  string s, t;
  cin >> s >> t;

  int dis_s = abs(s.at(1) - s.at(0));
  int dis_t = abs(t.at(1) - t.at(0));

  if (dis_s == 3) dis_s = 2;
  if (dis_t == 3) dis_t = 2;
  if (dis_s == 4) dis_s = 1;
  if (dis_t == 4) dis_t = 1;


  if (dis_s == dis_t) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}

// another answer
// 線分の長さは2通りしかない
// 隣合った頂点同士の線分は短くて、そのほかは長い
// 長いか短いかを判定すればよい

// // x,yが隣り合ってるかどうかを返す関数
// bool near(char x, char y) {
//   if (x > y) swap(x, y);
//   // x,yの差が1か4だったら隣り合っている
//   return y - x == 1 or y - x == 4;
// }

// int main() {
//   char a, b, c, d;
//   cin >> a >> b >> c >> d;

//   // 隣接状況が同じであれば長さは等しい
//   if (near(a, b) == near(c, d)) {
//     cout << "Yes" << endl;
//   } else {
//     cout << "No" << endl;
//   }

//   return 0;
// }