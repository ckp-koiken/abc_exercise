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

  // MEMO: 当初はこれで書いていた。何が間違っているのかよくわからない。
  // sampleとテストケース7つはACするが、後半のテストケースはWAになる
  // Sの含まれる文字だが、2回連続入力してしまった、なども誤って入力した文字に含まれるのか？
  // SがabcでTがaxbxcycなど。cを間違って2回入力している？（どっちのcが正しいか判断できない）

  // Sの各文字をsetにまとめてTと一致した文字の番号を表示する
  // set<char> st;
  // for (int i = 0; i < (int)S.size(); i++) {
  //   st.insert(S.at(i));
  // }

  // for (int i = 0; i < (int)T.size(); i++) {
  //   if (st.count(T.at(i))) {
  //     cout << i + 1 << " ";
  //   }
  // }
  // cout << endl;

  return 0;
}