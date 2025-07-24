#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  vector<int> pos;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == '#') {
      pos.push_back(i + 1);
    }
  }

  int cnt = 0;
  for (int i = 0; i < pos.size(); i++) {
    cout << pos.at(i);
    cnt++;
    if (cnt < 2) {
      cout << ",";
      cnt++;
    } else {
      cout << endl;
      cnt = 0;
    }
  }

  // another answer
  // 1文字ずつカンマを入れて2文字ごとに改行して表示する方法
  // iとi+1番目の数字をカンマ入りで表示して改行する
  // インデックスを2文字ずつ進める
  for (int i = 0; i < pos.size(); i += 2) {
    cout << pos.at(i) << "," << pos.at(i + 1) << endl;
  }
  return 0;
}