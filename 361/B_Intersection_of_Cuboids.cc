#include <bits/stdc++.h>
using namespace std;

bool check(int l1,int r1,int l2, int r2) {
  return !(r1 <= l2 || r2 <= l1);
}

int main() {
  int a, b, c, d, e, f, g, h, i, j, k, l;
  cin >> a >> b >> c >> d >> e >> f >> g >> h >> i >> j >> k >> l;

  if ((check(a, d, g, j) && check(b, e, h, k)) && check(c, f, i, l)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}