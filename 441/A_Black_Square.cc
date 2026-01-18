#include <bits/stdc++.h>
using namespace std;

int main() {
  int P, Q, X, Y;
  cin >> P >> Q >> X >> Y;

  int rev_P = P + 100;
  int rev_Q = Q + 100;

  if ((X >= P && X < rev_P) && (Y >= Q && Y < rev_Q)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
