#include <bits/stdc++.h>
using namespace std;

// 問題文を読み替える
// 100 * 100の座標をN回（1 < k <= N）、
// 指定された範囲(A < i <= B - 1)・(C < j <= D - 1)の座標(i, j)を黒く塗る
// 黒く塗ってある部分の個数を求める
int main() {
  int N, A, B, C, D;
  // 100 * 100の座標をboolの二次元配列で用意
  // 初期値はfalse
  vector<vector<bool>> g(100, vector<bool>(100, false));
  
  cin >> N;
  // 試行kをN回くり返す
  for (int k = 0; k < N; k++) {
    cin >> A >> B >> C >> D;

    // A, B, C, Dを読み取って
    // y座標C~D、x座標A~Bの範囲をtrueにしていく
    for (int i = C; i < D; i++) {
      for (int j = A; j < B; j++) {
        g.at(i).at(j) = true;
      }
    }
  }

  // trueの座標の数を数える
  int ans = 0;
  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 100; j++) {
      if (g.at(i).at(j)) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}