#include <bits/stdc++.h>
using namespace std;

int main() {
  int S, T;
  cin >> S >> T;

  int ans = 0;
  for (int a = 0; a <= 100; a++) {
    for (int b = 0; b <= 100; b++) {
      for (int c = 0; c <= 100; c++) {
        bool ok1 = a + b + c <= S;
        bool ok2 = a * b * c <= T;

        if (ok1 && ok2) ans++;
      }
    }
  }

  cout << ans << endl;
  return 0;
}