#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b, c;
  cin >> a >> b >> c;

  vector<int> num = {a, b, c};

  sort(num.begin(), num.end());

  if (num[1] == b) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  // another answer
  // 単純に比較してもよい
  // if ((a <= b && b <= c) || (a >= b && b >= c)) {
  //   cout << "Yes" << endl;
  // } else {
  //   cout << "No" << endl;
  // }

  return 0;
}
