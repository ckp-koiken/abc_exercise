#include <bits/stdc++.h>
using namespace std;

int main() {
  int X;
  cin >> X;

  string S = "HelloWorld";

  for (int i = 0; i < (int)S.size(); i++) {
    if (i != X - 1) cout << S[i];
  }

  cout << '\n';

  // another answer
  // X文字目を削除しても良い
  // S.erase()で削除位置をイテレータで渡す
  // S.erase(S.begin() + X - 1);
  // cout << S << endl;

  return 0;
}