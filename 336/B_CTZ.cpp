#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N;
  cin >> N;

  bitset<60> bs(N);

  int ans = 0;
  for (int i = 0; i < 60; i++) {
    if (bs.test(i) == 0) {
      ans++;
    } else {
      break;
    }
  }

  cout << ans << endl;
  return 0;
}