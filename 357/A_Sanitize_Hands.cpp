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

    // another answer
    // Mが0未満になるまで引き続ける
    // if (M >= 0) ans++;
  }
  
  cout << ans << endl;
  return 0;
}