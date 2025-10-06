#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  
  map<char, int> ma;
  for (char c : S) {
    if (ma.count(c)) {
      ma[c]++;
    } else {
      ma[c] = 1;
    }
  }

  for (auto p : ma) {
    if (p.second == 1) {
      cout << p.first << endl;
    }
  }

  return 0;
}

// another answer
// Sを辞書順にソートして先頭か末尾を探す
// ソートしたSの1文字目と2文字目が違うなら1文字目が答え
// そうでないなら末尾の1文字が答え

// int main() {
//   string s;
//   cin >> s;
//   sort(s.begin(), s.end());
//
//   if (s[0] != s[1]) {
//     cout << s[0] << endl;
//   } else {
//     // .back()で末尾要素を取得
//     cout << s.back() << endl;
//   }
//
//   return 0;
// }
