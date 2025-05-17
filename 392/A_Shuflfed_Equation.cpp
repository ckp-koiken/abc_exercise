#include <bits/stdc++.h>
using namespace std;

int main() {
  int a1, a2, a3;
  cin >> a1 >> a2 >> a3;

  if (a3 == a1 * a2 || a2 == a1 * a3 || a1 == a2 * a3) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}

// another answer
  // 交換法則をつかう
  // vector<int> a(3);
  // cin >> a.at(0) >> a.at(1) >> a.at(2);
  // sort(a.begin(), a.end());
  // if (a.at(0) * a.at(1) == a.at(2)) {
  //   cout << "Yes" << endl;
  // } else {
  //   cout << "No" << endl;
  // }

