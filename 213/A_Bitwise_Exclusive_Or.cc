#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  for (int C = 0; C <= 255; C++) {
    if ((A ^ C) == B) {
      cout << C << endl;
      return 0;
    }
  }

  return 0;
}