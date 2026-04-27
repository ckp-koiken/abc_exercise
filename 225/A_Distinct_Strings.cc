#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  sort(S.begin(), S.end());

  set<string> se;
  do {
    se.insert(S);
  } while (next_permutation(S.begin(), S.end()));

  cout << (int)se.size() << endl;

  // another answer
  // 3文字すべて同じ場合は1通り
  // 3文字すべて相異なる文字の場合は3! = 6通り
  // 3文字のうち2文字が同じで残り1文字が別の文字で構成される場合3通り
  // set<char> sec(S.begin(), S.end());
  // int m = (int)sec.size();

  // if (m == 1) {
  //   cout << 1 << endl;
  // } else if (m == 3) {
  //   cout << 6 << endl;
  // } else {
  //   cout << 3 << endl;
  // }
  return 0;
}