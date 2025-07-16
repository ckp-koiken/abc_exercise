#include <bits/stdc++.h>
using namespace std;

int main() {
  int xa, ya, xb, yb, xc, yc;
  cin >> xa >> ya >> xb >> yb >> xc >> yc;

  int ab = (xa - xb) * (xa - xb) + (ya - yb) * (ya - yb);
  int bc = (xb - xc) * (xb - xc) + (yb - yc) * (yb - yc);
  int ca = (xc - xa) * (xc - xa) + (yc - ya) * (yc - ya);

  vector<int> dist = {ab, bc, ca};
  sort(dist.begin(), dist.end());
  bool check = dist.at(0) + dist.at(1) == dist.at(2);

  if (check) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}