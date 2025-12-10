#include <bits/stdc++.h>
using namespace std;

// Nを2桁の16進数に変換したいとき
// N = 16 * a + bを求める
int main() {
  int N;
  cin >> N;

  int a, b;
  a = N / 16;
  b = N % 16;

  // a, bが9以下の場合はそのまま出力
  // 10以上の場合はA～Fのアルファベットで出力
  // 'A' + a - 10でaからどの程度離れているかでcharを出力
  if (a <= 9) {
    cout << a;
  } else {
    cout << (char)('A' + a - 10);
  }

  if (b <= 9) {
    cout << b;
  } else {
    cout << (char)('A' + b - 10);
  }

  cout << '\n';

  return 0;
}