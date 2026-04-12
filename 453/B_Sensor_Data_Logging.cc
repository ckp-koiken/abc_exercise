#include <bits/stdc++.h>
using namespace std;

using P = pair<int, int>;

int main() {
  int T, X;
  cin >> T >> X;
  vector<int> A(T + 1);
  for (int i = 0; i < T + 1; i++) cin >> A[i];

  vector<P> record;
  int time = 0;
  int now = A[0];
  record.emplace_back(time, now);

  for (int i = 1; i < T + 1; i++) {
    int diff = abs(A[i] - now);
    if (diff >= X) {
      now = A[i];
      time = i;
      record.emplace_back(time, now);
    }
  }

  for (auto r : record) {
    cout << r.first << ' ' << r.second << endl;
  }
  return 0;
}