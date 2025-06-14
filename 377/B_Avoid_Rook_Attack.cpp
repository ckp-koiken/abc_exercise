#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> S(8);
  for (int i = 0; i < 8; i++) {
    cin >> S.at(i);
  }

  // それぞれのマスを見ていって、置ける場所の数を数える
  int ans = 0;
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      // 駒があった場所は置けないのでスルー
      if (S.at(i).at(j) == '#') continue;
      bool ok = true;
      // i行目を見て駒があれば置けないのでfalse
      for (int k = 0; k < 8; k++) {
        if (S.at(i).at(k) == '#') ok = false;
      }
      // j列目を見て駒があれば置けないのでfalse
      for (int k = 0; k < 8; k++) {
        if (S.at(k).at(j) == '#') ok = false;
      }
      // trueの数を数える
      if (ok) ans++;
    }
  }
  cout << ans << endl;
  
  return 0;
}