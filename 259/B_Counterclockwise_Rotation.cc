#include <bits/stdc++.h>
using namespace std;

int main() {
  double a, b, d;
  cin >> a >> b >> d;

  double r = hypot(a, b);
  double theata = atan2(b, a);

  theata += d * acos(-1.0) / 180.0;

  double x = cos(theata) * r;
  double y = sin(theata) * r;

  cout << fixed << setprecision(10) << x << ' ' << y << endl;
  return 0;
}
