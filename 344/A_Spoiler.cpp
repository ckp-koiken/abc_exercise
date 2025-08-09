#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int first, second;
  int cnt = 0;
  for (int i = 0; i < S.size(); i++) {
    if (S.at(i) == '|' && cnt == 0) {
      first = i;
      cnt++;
    }
    if (S.at(i) == '|' && cnt == 1) {
      second = i;
    }
  }

  for (int i = 0; i < S.size(); i++) {
    if (i < first || i > second) {
      cout << S.at(i);
    }
  }

  cout << endl;
  return 0;
}

// another answer
// findで|が現れる位置を探してsubstrで抽出する
// int first = S.find("|");  // 先頭から見て最初に|が現れる場所
// int second = S.rfind("|");  // 末尾から見て最初に|が現れる場所
// cout << S.subtr(0, first) + S.substr(y + 1) << endl;