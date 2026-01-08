#include <bits/stdc++.h>
using namespace std;

// 「(a, b)の原点からの距離」と「原点から(a, b)までを結ぶ線分の角度」を求める
// (a, b)の角度をd度増やした座標を求める
int main() {
  double a, b, d;
  cin >> a >> b >> d;

  // (a,b)の原点からの距離はr=\sqrt{a^2+b^2}
  // c++ではhypot(a, b)で求めてくれる（中で二乗して平方根をとってくれる）
  // 原点から(a,b)までを結ぶ線分の角度θは三角関数の逆関数を使うことで求められる
  // c++や多くのプログラミング言語ではatan2(y,x)で求めることができる
  double r = hypot(a, b);
  double theta = atan2(b, a);

  // 角度θをd度増やす
  // c++では角度を弧度法（ラジアン）で扱うが問題では度数法で与えられている
  // 度数法から弧度法に変換する d(rad) = d * pi / 180
  // piを求める時、c++ではacos(-1.0)を使うと正確(M_PIは環境依存なので使わない)
  // cos(pi) = -1 -> \acos(-1) = pi
  theta += d * acos(-1.0) / 180.0;

  // 距離r=1のとき、角度θのx,y座標はsinθ,cosθの定義そのもの
  double x = cos(theta) * r;
  double y = sin(theta) * r;

  cout << fixed << setprecision(10) << x << ' ' << y << endl;
  return 0;
}
