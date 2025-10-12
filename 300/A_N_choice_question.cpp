#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B, C, total;
  cin >> N >> A >> B;
  total = A + B;

  for (int i = 0; i < N; i++) {
    cin >> C;
    if (total == C) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  return 0;
}
