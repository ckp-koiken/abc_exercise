#include <bits/stdc++.h>
using namespace std;

int main() {
  int L, R;
  string S;
  cin >> L >> R >> S;

  // MEMO: イテレータは半開区感で指定する
  // reverse(first, last)なら、firstは含むがlastは含まない
  // なのでlast部分はS.begin()+Rとして1多く指定している
  reverse(S.begin() + L - 1, S.begin() + R);

  cout << S << endl;
  return 0;
}

// another answer
// whileループとL, Rの関係を使ってswapしてもよい
// int main() {
//   int l, r;
//   string s;
//   cin >> l >> r >> s;
//   l--, r--;

//   // p = l, q = lとする
//   // p文字目とq文字目を入れ替える
//   // pをインクリメント、qをデクリメントする
//   // p < qとなっている状態で繰り返せば指定区間のswapが完成する
//   int p = l, q = r;
//   while (p < q) {
//     swap(s[p], s[q]);
//     p++;
//     q--;
//   }

//   cout << s << endl;
//   return 0;
// }