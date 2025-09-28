#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int ans = 0;
  for (int i = 1; i <= N; i++) {
    int left = pow(-1, i);
    int right = pow(i, 3);
    ans +=  left * right;
  }

  cout << ans << endl;
  return 0;
}