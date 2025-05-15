#include <bits/stdc++.h>
using namespace std;

int main() {
  string S1, S2;
  cin >> S1 >> S2;

  if (S1 == S2 && S1 == "fine") {
    cout << 4 << endl;
  } else if (S1 == S2 && S1 == "sick") {
    cout << 1 << endl;
  } else if (S1 != S2 && S1 == "sick") {
    cout << 2 << endl;
  } else if (S1 != S2 && S2 == "sick") {
    cout << 3 << endl;
  } 
  return 0;
}

// another (proper) answer
  // if (S1 == "sick") {
  //   if (S2 == "sick") {
  //     cout << 1 << endl;
  //   } else {
  //     cout << 2 << endl;
  //   }
  // } else {
  //   if (S2 == "sick") {
  //     cout << 3 << endl;
  //   } else {
  //     cout << 4 << endl;
  //   }
  // }
