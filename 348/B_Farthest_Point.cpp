#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> X(N + 1, -1);
  vector<int> Y(N + 1, -1);
  for (int i = 1; i < N + 1; i++) {
    cin >> X.at(i);
    cin >> Y.at(i);
  }

  for (int i = 1; i < N + 1; i++) {
    int longer = -1;
    int ans = -1;
    for (int j = 1; j < N + 1; j++) {
      int tmp = pow(X.at(i) - X.at(j), 2) + pow(Y.at(i) - Y.at(j), 2);
      if (longer < tmp) {
        longer = tmp;
        ans = j;
      }
    }
    cout << ans << endl;
  }
  return 0;
}