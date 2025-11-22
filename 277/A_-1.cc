#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, X;
  cin >> N >> X;

  for (int i = 0; i < N; i++) {
    int P;
    cin >> P;
    if (P == X) {
      cout << i + 1 << endl;
      return 0;
    }
  }
  
  return 0;
}