#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;

  // Sの何文字目までが入力されたかをTの前から調べていく
  int j = 0; // S用のindex
  for (int i = 0; i < T.size(); i++) {
    // SのindexとTのindexを進めながら
    // 同じ文字だったときその順番を出力
    if (S.at(j) == T.at(i)) {
      cout << i + 1 << " ";
      j++;
    }
  }

  cout << endl;

  return 0;
}