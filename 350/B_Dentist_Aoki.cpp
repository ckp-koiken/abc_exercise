#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<int> T(Q);
  for (int i = 0; i < Q; i++) {
    cin >> T.at(i);
  }

  vector<int> teeth(N, 1);

  for (int i = 0; i < Q; i++) {
    if (teeth.at(T.at(i) - 1) == 0) {
      teeth.at(T.at(i) - 1) = 1;
    } else {
      teeth.at(T.at(i) - 1) = 0;
    }
  }

  int ans = 0;
  for (int t : teeth) {
    if (t == 1) ans++;
  }

  cout << ans << endl;
  return 0;
}