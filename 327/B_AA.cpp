#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t B;
  cin >> B;

  for (int A = 1; A <= 15; A++) {
    int64_t tmp = 1;
    
    for (int i = 0; i < A; i++) {
      tmp *= A;
    }

    if (tmp == B) {
      cout << A << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}