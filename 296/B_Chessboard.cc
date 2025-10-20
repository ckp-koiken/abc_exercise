#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<string> S(8);
  for (int i = 0; i < 8; i++) {
    cin >> S[i];
  }

  // *が書かれているマスを探す
  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      if (S[i][j] == '*') {
        // 左からの位置(添え字j)でabcdを決める
        // 下からの位置で番号を決める
        // 一番下が1なので上限の8からiを引いたもので求める
        cout << "abcdefgh"[j] << 8 - i << endl;
        return 0;
      }
    }
  }

  // another answer
  // *が書かれているマスの座標から名前をchar型で求める
  // for (int i = 0; i < 8; i++) {
  //   for (int j = 0; j < 8; j++) {
  //     if (S[i][j] == '*') {
  //       // char型にしないと表示するときに整数で表示されてしまうので注意
  //       // '0'からの位置で表現
  //       char r = '0' + (8 - i);
  //       // 'a'からの位置で表現
  //       char c = 'a' + j;

  //       cout << c << r << endl;
  //       return 0;
  //     }
  //   }
  // }

  return 0;
}