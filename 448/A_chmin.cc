#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;

  for (int i = 0; i < N; i++) {
    int A;
    cin >> A;
    if (A < X) {
      X = A;
      cout << 1 << endl;
    } else {
      cout << 0 << endl;
    }
  }
  return 0;
}