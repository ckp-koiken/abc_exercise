#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  int ans = 1;
  for (int i = 0; i < B; i++) {
    ans *= A;
  }

  cout << ans << endl;
  return 0;
}