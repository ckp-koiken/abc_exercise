#include <bits/stdc++.h>
using namespace std;

int recursive(int n) {
  if (n == 0) return 1;
  return n * recursive(n - 1);
}

int main() {
  int N;
  cin >> N;

  int ans = recursive(N);

  cout << ans << endl;
  return 0;
}