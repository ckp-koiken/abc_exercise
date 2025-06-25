#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> D(N - 1);
  for (int &d : D) cin >> d;

  for (int i = 0; i < N - 1; i++) {
    for (int j = i + 1; j < N; j++) {
      int ans = 0;
      for (int k = i; k < j; k++) {
        ans += D.at(k);
      }
      cout << ans;
      if (j < (N - 1)) {
        cout << " ";
      } else {
        cout << endl;
      }
    }
  }
  return 0;
}