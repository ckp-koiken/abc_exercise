#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N;
  cin >> N;

  int64_t cnt = 1;
  int ans = 0;
  while (cnt * 2 <= N) {
    cnt *= 2;
    ans++;
  }

  cout << ans << endl;
  return 0;
}