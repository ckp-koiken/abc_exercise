#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  double C;

  C = (static_cast<double>(A - B) / 3) + B;

  cout << fixed << setprecision(10) << C << endl;
  return 0;
}