#include <bits/stdc++.h>
using namespace std;

// パスカルの三角形を作ればよい
int main() {
  int N;
  cin >> N;

  // 二次元配列を用意
  // N行N列で0で初期化
  // 行の要素数はN要素となる
  vector<vector<int>> A(N, vector<int>(N, 0));

  // 行はN回ループ、列はN+1回ループ（iの数だけループ）
  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= i; j++) {
      if (j == 0 || j == i) {
        // j == 0 または j == iのとき1
        A[i][j] = 1;
      } else {
        // それ以外の時1行上の前後2つの数の合計
        A[i][j] = A[i - 1][j - 1] + A[i - 1][j];
      }
    }
  }

  // 二次元配列を表示
  for (int i = 0; i < N; i++) {
    for (int j = 0; j <= i; j++) {
      // j == iのとき（行がすべての要素を表示したとき）改行
      // そうでないときは空白
      cout << A[i][j] << (j == i ? '\n' : ' ');
    }
  }

  return 0;
}
