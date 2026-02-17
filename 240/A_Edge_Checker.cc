#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (a == 10 || b == 10) {
    if (abs(a - b) == 9) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  if (abs(a - b) == 1) {
    cout << "Yes" << endl;
    return 0;
  }

  cout << "No" << endl;

  // another answer
  // a < bの制約から、b-a==1 || b-a==9 としても良い
  // if (b - a == 1 || b - a == 9) {
  //   cout << "Yes" << endl;
  // } else {
  //   cout << "No" << endl;
  // }

  return 0;
}