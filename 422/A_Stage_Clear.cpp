#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int i = S.at(0) - '0';
  int j = S.at(2) - '0';

  if (j < 8) {
    cout << i << "-" << j + 1 << endl;
  }

  if (i < 8 && j == 8) {
    cout << i + 1 << "-" << 1 << endl;
  } 

  // another answer
  // 整数型に変換しなくても文字の数字にそのまま足し引きすればいい
  // if (S.at(2) == '8') {
  //   S.at(0)++;
  //   S.at(2) = '1';
  // } else {
  //   S.at(2)++;
  // }
  // cout << S << endl;

  return 0;
}