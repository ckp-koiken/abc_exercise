#include <bits/stdc++.h>
using namespace std;

int main() {
  string x;
  cin >> x;

  // 末尾が0である限りその文字を削除することを繰り返す
  // .back()で末尾要素をみる
  // .pop_back()で末尾要素を削除する
  while (x.back() == '0') {
    x.pop_back();
  }

  // 末尾の0を削除した後で末尾が.であれば削除する
  if (x.back() == '.') {
    x.pop_back();
  }
  cout << x << endl;
  return 0;
}