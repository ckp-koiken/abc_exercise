#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  string T = "";
  for (char c : S) {
    if (c >= 48 && c <= 59) {
      T.push_back(c);
    }
  }

  cout << T << endl;

  // another answer
  // isdigit()を使うともっと簡単
  // for (char c : S) {
  //   if (isdigit(c)) {
  //     cout << c;
  //   }
  // }
  // cout << '\n';
  return 0;
}