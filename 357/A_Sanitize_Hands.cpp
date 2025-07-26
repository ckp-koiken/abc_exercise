#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  int ans = 0;
  for (int i = 0; i < N; i++) {
    int H;
    cin >> H;
    M -= H;
    ans++;

    if (M == 0) {
      cout << ans << endl;
      return 0;
    }

    if (M < 0) {
      cout << ans - 1 << endl;
      return 0;
    }
  }
  
  cout << ans << endl;
  return 0;
}