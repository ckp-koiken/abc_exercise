#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  int n = A - B;
  long long ans = 1;

  for (int i = 0; i < n; i++) {
    ans *= 32;
  }

  cout << ans << endl;
  return 0;
}