#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S, T;
  cin >> N >> S;

  double last_t = 0;
  for (int i = 0; i < N; i++) {
    cin >> T;
    double limit_t = S + 0.5;
    if ((T - last_t) >= limit_t) {
      cout << "No" << endl;
      return 0;
    } else {
      last_t = T;
      continue;
    }
  }
  cout << "Yes" << endl;
  return 0;
}