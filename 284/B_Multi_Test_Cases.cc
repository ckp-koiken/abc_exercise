#include <bits/stdc++.h>
using namespace std;

int main() {
  int T;
  cin >> T;
  for (int i = 0; i < T; i++) {
    int N;
    cin >> N;
    int ans = 0;
    for (int i = 0; i < N; i++) {
      int a;
      cin >> a;
      if (a % 2 == 1) ans++;
    }
    cout << ans << endl;
  }
  return 0;
}