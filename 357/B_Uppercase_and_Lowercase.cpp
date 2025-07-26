#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int cnt = 0;
  for (char c : S) {
    if (c < 97) {
      cnt++;
    }
  }

  if (cnt > ((int)S.size() - cnt)) {
    for (int i = 0; i < S.size(); i++) {
      S.at(i) = toupper(S.at(i));
    }
  } else {
    for (int i = 0; i < S.size(); i++) {
      S.at(i) = tolower(S.at(i));
    }
  }

  cout << S << endl;
  return 0;
}

// another answer
// 小文字大文字の判定にislower(), isupper()を用いる場合
// int main() {
//   string S;
//   cin >> S;

//   int lower = 0, upper = 0;
//   for (char c : S) {
//     if (islower(c)) {
//       lower++;
//     } else {
//       upper++;
//     }
//   }

//   if (lower < upper) {
//     // 参照を使ってスマートに書ける
//     // 変えるべき部分だけをislower()、isupper()を用いて指定しても良い
//     for (char &c : S) {
//       c = toupper(c);
//     }
//   } else {
//     for (char &c : S) {
//       c = tolower(c);
//     }
//   }

//   cout << S << endl;
// }