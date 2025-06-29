#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B;
  cin >> N;

  int ans = 0;
  for (int i = 0; i < N; i++) {
    cin >> A >> B;
    if (A < B) ans++;
  }

  cout << ans << endl;
  return 0;
}