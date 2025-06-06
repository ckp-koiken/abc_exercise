#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  string n = to_string(N);

  // another answer1
  // ソートして122333になるかどうかで判定
  // sort(n.begin(), n.end());
  // if (n == "122333") {
  //   cout << "Yes" << endl;
  // } else {
  //   cout << "No" << endl;
  // }

  int one = 0;
  int two = 0;
  int three = 0;
  for (char c : n) {
    if (c == '1') one++;
    if (c == '2') two++;
    if (c == '3') three++;
  }

  if (one == 1 && two == 2 && three == 3) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  return 0;
}