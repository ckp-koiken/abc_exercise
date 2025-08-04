#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  map<char, int> data;
  for (int i = 0; i < (int)S.size(); i++) {
    if (data.count(S.at(i))) {
      data.at(S.at(i))++;
    } else {
      data[S.at(i)] = 1;
    }
  }
  // 以下でも書ける
  // for (char c : S) data[c]++;
  
  for (int index = 1; index <= 100; index++) {
    int cnt = 0;
    for (auto d : data) {
      if (d.second == index) cnt++;
    }
    if (cnt != 0 && cnt != 2) {
      cout << "No" << endl;
      return 0;
    }
  }

  // another answer
  // 文字の出現数ごとの数を数えるためのmapをもう一つ作る
  // 出現数ごとの種類数が2でなければNo（出現数0はそもそもカウントされない）
  // map<int, int> cnt;
  // for (auto p : data) cnt[p.second]++;
  // for (auto p : cnt) {
  //   if (p.second != 2) {
  //     cout << "No" << endl;
  //     return 0;
  //   }
  // }

  cout << "Yes" << endl;
  return 0;
}