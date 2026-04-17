#include <bits/stdc++.h>
using namespace std;

// 1次元の問題として考える
// 2区間(a, b)と(c, d)の共通部分の長さが正であるかを判定したい
// (a, b)が(c, d)より左側にあるか、(a, b)が(c, d)より右側にあるとき共通部分が0になる
// つまりb <= c || d <= a のとき共通部部分が0
// この否定の判定を3次元で（つまり3回）やればよい

// 関数化する
bool check(int l1,int r1,int l2, int r2) {
  // 共通部分が0であるかどうかの否定を返す
  return !(r1 <= l2 || r2 <= l1);
}

int main() {
  int a, b, c, d, e, f, g, h, i, j, k, l;
  cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;

  // 座標を入力
  // x座標の判定(x1, x2, x3, x4)とy座標の判定(y1, y2, y3, y4)およびz座標の判定(z1, z2, z3, z4)
  // が全て真であれば共通部分が正である
  if ((check(a, d, g, j) && check(b, e, h, k)) && check(c, f, i, l)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}