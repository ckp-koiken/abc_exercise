#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  reverse(S.begin(), S.end());

  if (S.at(0) == 'n' && S.at(1) == 'a' && S.at(2) == 's') {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}

// another answer
// substr(n)でn番目以降の文字列を取り出す
// 最後の三文字だけ取り出す
// if (S.substr(S.size() - 3) == "san") {
//   cout << "Yes" << endl;
// } else {
//   cout << "No" << endl;
// }