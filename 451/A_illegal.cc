#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int n = (int)S.size();

  if (n % 5 == 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  // 3項演算子を使うのでもよい
  // cout << (n % 5 == 0 ? "Yes" : "No") << endl;

  return 0;
}