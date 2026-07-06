#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;
  if (3 * A > 2 * B) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  // another answer
  // (double)A > (double)B * 2/ 3
  // のようにして正攻法にdouble型にする方法もある
  return 0;
}