#include <bits/stdc++.h>
using namespace std;

char check_letter(char c) {
  if (c >= 'a' && c <= 'c') {
    return '2';
  } else if (c >= 'd' && c <= 'f') {
    return '3';
  } else if (c >= 'g' && c <= 'i') {
    return '4';
  } else if (c >= 'j' && c <= 'l') {
    return '5';
  } else if (c >= 'm' && c <= 'o') {
    return '6';
  } else if (c >= 'p' && c <= 's') {
    return '7';
  } else if (c >= 't' && c <= 'v') {
    return '8';
  } else {
    return '9';
  }
}

int main() {
  int N;
  cin >> N;

  string C = "";
  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;

    char letter = check_letter(S[0]);
    C += letter;
  }

  cout << C << endl;
  return 0;
}

// another answer
// if文の分岐を増やすと書く量が多くて大変
// 文字を数字に一致させる方法として配列を用いると楽
// int main() {
//   // アルファベットと変換先の数字の対応表（配列）を作っておく
//   string StoC = "22233344455566677778889999";
//   int n;
//   string ans;

//   cin >> n;
//   for (int i = 0; i < n; i++) {
//     string s;
//     cin >> s;

//     // 文字列sの1文字目と'a'との距離で対応表を参照
//     // 該当する数字を連結できる
//     ans += StoC[s[0] - 'a'];
//   }

//   cout << ans << endl;
//   return 0;
// }