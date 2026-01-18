#include <bits/stdc++.h>
using namespace std;

int main() {
  int P, Q, X, Y;
  cin >> P >> Q >> X >> Y;

  int rev_P = P + 100;
  int rev_Q = Q + 100;

  // X <= rev_P, Y <= rev_Qではないことに注意
  // Pから100マス、Qから100マス塗られているので端は含まない
  if ((X >= P && X < rev_P) && (Y >= Q && Y < rev_Q)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
