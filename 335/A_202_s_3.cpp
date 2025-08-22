#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int n = S.size();

  S.at(n - 1) = '4';

  // another answer
  // pop_backで末尾を削除して
  // push_backで末尾に4を追加するのでも良い
  // S.pop_back();
  // S.push_back('4');

  cout << S << endl;
  return 0;
}