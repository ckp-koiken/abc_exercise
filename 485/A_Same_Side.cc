#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  if ((A < 0 && B > 0) || (A > 0 && B < 0)) {
    cout << "No" << endl;
  } else {
    cout << "Yes" << endl;
  }
  return 0;
}