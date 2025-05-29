#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  int64_t m = 1;
  for (int i = 0; i < K; i++) {
    m *= 10;
  }

  int64_t x = 1;
  for (int i = 0; i < N; i++) {
    int64_t a;
    cin >> a;
    if ((m - 1) / x < a) {
      x = 1;
    } else {
      x *= a;
    }
  }
  cout << x << endl;
  return 0;
}