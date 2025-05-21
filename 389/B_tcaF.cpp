#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t X;
  cin >> X;
  int N = 1;
  while (X != 1) {
    if (X % N == 0) {
      X /= N;
    }
    N++;
  }
  cout << N - 1 << endl;
  return 0;
}