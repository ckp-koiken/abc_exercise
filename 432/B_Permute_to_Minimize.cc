#include <bits/stdc++.h>
using namespace std;

int main() {
  string X;
  cin >> X;

  // 桁を昇順にソートする
  sort(X.begin(), X.end());

  // 各桁を順番に見て、最初に0でない数値の桁に当たった時
  // それを先頭の桁と交換し終了する
  int n = (int)X.size();
  for (int i = 0; i < n; i++) {
    if (X[i] > '0') {
      swap(X[0], X[i]);
      break;
    }
  }
  cout << X << endl;

  return 0;
}