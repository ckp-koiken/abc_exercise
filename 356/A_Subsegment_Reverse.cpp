#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, L, R;
  cin >> N >> L >> R;

  int r = R;
  for (int i = 1; i <= N; i++) {
    if (i < L || i > R) {
      cout << i << " ";
    } else {
      cout << r << " ";
      r--;
    }
  }

  cout << endl;

  return 0;
}