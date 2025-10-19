#include <bits/stdc++.h>
using namespace std;

int main() {
  int S, A, B, X;
  cin >> S >> A >> B >> X;

  int dis = 0;
  int tmp = 0;
  for (int i = 0; i < X; i++) {
    if (tmp < A) {
      dis += S;
      tmp++;
    } else {
      tmp++;
      if (tmp == A + B) tmp = 0;
    }
  }

  cout << dis << endl;
  return 0;
}