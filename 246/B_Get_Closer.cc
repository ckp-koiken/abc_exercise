#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  
  double d = sqrt(A * A + B * B);
  
  cout << fixed << setprecision(10) << A / d << ' ' << B / d << endl;
  return 0;
}