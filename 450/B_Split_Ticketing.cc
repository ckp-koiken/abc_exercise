#include <bits/stdc++.h>
using namespace std;

// 問題文の条件をそのまま再現する
// a, b, cを全探索して条件（a~cの方がa~b+b~cよりも大きい）に合っていればYesを、
// そうでないならNoを出力
int main() {
  int n;
  cin >> n;
  // n*nの二次元配列を確保
  vector<vector<int>> C(n, vector<int>(n));

  // C[i][j]に入力
  // 駅番号であるjは添え字に1加えたものとして確保したいので
  // i+1番から入力していく
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      cin >> C[i][j];
    }
  }

  // a,b,cの三地点を全探索
  // c~n、b~c、a~bで探索
  // a（最も左にある地点）から順番に探すのでもいいが
  // 小さい順にa,b,c全部を探してa>bやc>bの条件でcontiuneしないといけないので遅い
  // c（最も右にある地点）から逆方向に探していった方が早い
  // b<cやa<bのループを書けばそれで済む
  for (int c = 0; c < n; c++) {
    for (int b = 0; b < c; b++) {
      for (int a = 0; a < b; a++) {
        // a~cの方がa~b+b~cよりもコストが高いのであればYesを表示して終了
        if (C[a][c] > C[a][b] + C[b][c]) {
          cout << "Yes" << endl;
          return 0;
        }
      }
    }
  }

  cout << "No" << endl;
  return 0;
}