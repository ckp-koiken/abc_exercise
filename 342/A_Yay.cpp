#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  
  map<char, int> data;
  for (char c : S) {
    if (data.count(c)) {
      data.at(c)++;
    } else {
      data[c] = 1;
    }
  }
  char target;
  for (auto d : data) {
    if (d.second == 1) target = d.first;
  }

  for (int i = 0; i < (int)S.size(); i++) {
    if (S.at(i) == target) {
      cout << i + 1 << endl;
    }
  }
  return 0;
}

// another answer
// 二重ループを使って異なる文字にフラグを立てる

// フラグを設定するループ
// for (int i = 0; i < (int)S.size(); i++) {
//   bool diff = true; // フラグ
//   // フラグの対象を文字列全体にわたって探索するループ
//   for (int j = 0; j < (int)S.size(); j++) {
//     // iとjが異なるとき、フラグ対象と文字が等しければフラグを下げる
//     if (i != j && S.at(i) == S.at(j)) {
//       diff = false;
//     }
//   }
//   // フラグが立っていれば異なる文字なので番号を表示する
//   if (diff == true) {
//     cout << i + 1 << endl;
//   }
// }