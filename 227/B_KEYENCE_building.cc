#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> S(N);
  for (int i = 0; i < N; i++) cin >> S[i];

  set<int> se;
  for (int a = 1; a <= 1000; a++) {
    for (int b = 1; b <= 1000; b++) {
      int tmp = 4 * a * b + 3 * a + 3 * b;
      se.insert(tmp);
    }
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (!se.count(S[i])) ans++;
  }

  cout << ans << endl;
  return 0;
}