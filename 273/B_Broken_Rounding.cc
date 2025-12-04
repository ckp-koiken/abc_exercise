#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t X;
  int K;
  cin >> X >> K;

  int64_t pow10 = 1;
  for (int i = 0; i < K; i++) {
    X /= pow10;
    int64_t m = (X % 10);

    if (m <= 4) {
      X -= m;
    } else {
      X += (10 - m);
    }
    
    X *= pow10;
    pow10 *= 10;
  }

  cout << X << '\n';

  return 0;
}