#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B, C, X;
  cin >> A >> B >> C >> X;

  double ans = 0;
  if (X >= A + 1 && X <= B) {
    double div = B - A;
    ans = C / div;
  } else if (X <= A) {
    ans = 1;
  } else if (X > B) {
    ans = 0;
  }

  printf("%.10lf\n", ans);
  return 0;
}