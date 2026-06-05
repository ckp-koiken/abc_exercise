#include <bits/stdc++.h>
using namespace std;

long long sq(long long x) {
  return x * x;
}

int main() {
  int T;
  cin >> T;

  for (int i = 0; i < T; i++) {
    long long x1, y1, r1, x2, y2, r2;
    cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
    long long L = sq(r1 - r2);
    long long M = sq(x1 - x2) + sq(y1 - y2);
    long long R = sq(r1 + r2);

    if (L <= M && M <= R) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }
  
  return 0;
}