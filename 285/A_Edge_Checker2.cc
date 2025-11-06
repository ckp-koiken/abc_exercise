#include <bits/stdc++.h>
using namespace std;

int main() {
  int a, b;
  cin >> a >> b;

  if (a > b) swap(a, b);

  // MEMO: b/a == 2で判断してもよい
  if (b == (2 * a + 1) || b == (2 * a)) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}