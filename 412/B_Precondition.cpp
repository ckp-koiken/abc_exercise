#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;

  for (int i = 1; i < S.size(); i++) {
    if (isupper(S.at(i))) {
      char target = S.at(i - 1);
      bool check = false;
      for (int j = 0; j < T.size(); j++) {
        if (T.at(j) == target) {
          check = true;
          break;
        }
      }
      if (!check) {
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
  return 0;
}

// another answer
// find関数を使えばTに含まれているかの判定をfor文を書かずに判定できる
// int main() {
//   string s, t;
//   cin >> s >> t;

//   bool res = true;
//   for (int i = 1; i < s.size(); i++) {
//     if (isupper(s.at(i))) {
//       // tにs.at(i-1)の文字が含まれていなければ(string::npos)falseにする
//       if (t.find(s.at(i - 1)) == string::npos) {
//         res = false;
//       }
//     }
//   }

//   cout << (res ? "Yes" : "No") << endl;
//   return 0;
// }