#include <bits/stdc++.h>
using namespace std;

// a,bを読み込みながら10進法にして返す関数
int read(int k) {
  // 文字列で読み込む
  string s;
  cin >> s;

  // 10進法に変換した結果を格納する変数
  int res = 0;

  // 読み込んだ文字列を先頭から読んでいく
  for (char c : s) {
    // k進法から10進法に変換するためには各桁の数にkの桁数-1乗を掛けたものを足していく
    // 左から1桁ずつ読んでこれまでの値をk倍して次の桁を足していけばいい
    res = res * k + (c - '0');
  }
  return res;
}

// k進法で表現された数字a, bを10進法に変換して掛け算する
// a,bを読み込みながら10進法に変換する関数を用意しておく
int main() {
  int k;
  cin >> k;
  int a = read(k);
  int b = read(k);

  cout << (long long)a * b << endl;
  return 0;
}