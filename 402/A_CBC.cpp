#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) < 97) {
      cout << S.at(i);
    }
  }  

  // another answer
  // for (char c : S) {
  //   if (isupper(c)) {
  //     cout << c;
  //   }
  // }

  cout << endl;
  return 0;
}