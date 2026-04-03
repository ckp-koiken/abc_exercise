#include <bits/stdc++.h>
using namespace std;

int main() {
  int S, T, X;
  cin >> S >> T >> X;

  // SよりTが大きい時
  if (S < T) {
    // XがSとTの間にあれば電気がついている
    if (S <= X && X < T) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  } else {
    // TよりSが大きい時
    // XがTより前か、S以上であれば電気がついている
    if (X < T || S <= X) {
      cout << "Yes" << endl;
    } else {
      cout << "No" << endl;
    }
  }

  return 0;
}