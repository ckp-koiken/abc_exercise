#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int B1, B2, R1, R2, K;
  int tmpB = 0;
  int tmpR = 0;
  for (int i = 0; i < 8; i++) {
    if (S[i] == 'B') {
      if (tmpB == 0) {
        B1 = i + 1;
        tmpB = 1;
      } else {
        B2 = i + 1;
      }
    }

    if (S[i] == 'R') {
      if (tmpR == 0) {
        R1 = i + 1;
        tmpR++;
      } else {
        R2 = i + 1;
      }
    }

    if (S[i] == 'K') K = i + 1;
  }

  bool isBcond = false;
  if ((B1 % 2 == 0 && B2 % 2 == 0) || (B1 % 2 == 1 && B2 % 2 == 1)) {
    isBcond = false;
  } else {
    isBcond = true;
  }

  bool isKcond = false;
  if (R1 < K && K < R2) isKcond = true;

  if (isBcond && isKcond)
    cout << "Yes" << endl;
  else
    cout << "No" << endl;

  return 0;
}

// another answer
// 文字ごとに配列をもつmapを作ると簡単に書ける
// int main() {
//   string s;
//   cin >> s;

//   // 文字とその文字が何番目にあるかを保存する配列を組にしたmap
//   map<char, vector<int>> mp;
//   for (int i = 0; i < 8; i++) {
//     // 文字ごとに何番目に登場したかを配列に記録
//     mp[s[i]].push_back(i);
//   }

//   bool ok = true;
//   // 1つ目のBと2つ目のBの偶奇（２で割った余り）が異なるかどうかとokの論理積代入
//   ok &= mp['B'][0] % 2 != mp['B'][1] % 2;

//   // Kが２つのRに挟まれているかどうかとokの論理積代入
//   ok &= mp['R'][0] < mp['K'][0] && mp['K'][0] < mp['R'][1];

//   if (ok)
//     cout << "Yes" << endl;
//   else
//     cout << "No" << endl;
//   return 0;
// }