#include <bits/stdc++.h>
using namespace std;

int main() {
  int B, G;
  cin >> B >> G;

  if (B > G) {
    cout << "Bat" << endl;
  } else {
    cout << "Glove" << endl;
  }

  // 3項演算子を使っても良い
  // cout << (B > G ? "Bat" : "Glove") << endl;
  return 0;
}