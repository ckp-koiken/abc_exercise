#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // 先頭から順に押していくことを考える
  int l = S.size();  // 入力桁数
  int p = 0, res = 0; // pが入力位置、resが入力回数

  // 入力ごとに入力位置を進めていく
  while (p < l) {
    res++;  // 入力回数を進める
    // 入力桁以内で0が2つ連続していたらpを2つ進める
    // そうでなければ1つ進める
    if ((p + 1) < l && S.at(p) == '0' && S.at(p + 1) == '0') {
      p += 2;
    } else {
      p++;
    }
  }

  cout << res << endl;
  return 0;
}