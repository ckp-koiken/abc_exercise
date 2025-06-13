#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  sort(S.begin(), S.end());
  if (S == "ABC") {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}

  // another answer
  // findを使う
  // if (S.find("A") != string::npos && S.find("B") != string::npos && S.find("C") != string::npos) {
  //   cout << "Yes" << endl;
  // } else {
  //   cout << "No" << endl;
  // }
