#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, H, X;
  cin >> N >> H >> X;
  vector<int> P(N);
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  int target = X - H;
  for (int i = 0; i < N; i++) {
    if (P.at(i) >= target) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  return 0;
}