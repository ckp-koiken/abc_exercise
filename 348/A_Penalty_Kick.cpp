#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  for (int i = 1; i <= N; i++) {
    if (i % 3 == 0) {
      cout << 'x';
    } else {
      cout << 'o';
    }
  }
  cout << endl;
  return 0;
}

// another answer
// 空の文字列にoかxを足していって文字列全体を表示する方法
// string S = "";
// for (int i = 1; i <= N; i++) {
//   if (i % 3 == 0) {
//     S.push_back('x');
//   } else {
//     S.push_back('o');
//   }
// }
// cout << S << endl;