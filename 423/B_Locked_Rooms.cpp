#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> l(N);
  for (int i = 0; i < N; i++) {
    cin >> l.at(i);
  }

  int L = N;
  int R = 0;

  for (int i = 0; i < N; i++) {
    if (l.at(i) == 1) {
      L = min(L, i);
      R = max(R, i);
    }
  }

  if (L == N) {
    cout << 0 << endl;
  } else {
    cout << R - L << endl;
  }

  return 0;
}