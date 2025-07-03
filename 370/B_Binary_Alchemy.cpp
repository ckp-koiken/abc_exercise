#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<int>> A(N, vector<int>(N));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= i; j++) {
      cin >> A.at(i).at(j);
      A.at(i).at(j)--;
    }
  }

  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (ans >= i) {
      ans = A.at(ans).at(i);
    } else {
      ans = A.at(i).at(ans);
    }
  }
  ans++;
  cout << ans << endl;
  return 0;
}