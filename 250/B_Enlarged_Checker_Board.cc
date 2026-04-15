#include <bits/stdc++.h>
using namespace std;

// n * nマスの市松模様（白黒塗分け）をa * b倍したものと考える
// 大きい(n*a)*(n*b)マスをそれぞれaとbで割る
// マス番号の合計値の偶奇を判定し奇数の時に黒く塗ればよい
int main() {
  int n, a, b;
  cin >> n >> a >> b;
  vector<string> s(n * a, string(n * b, '.'));

  for (int i = 0; i < n * a; i++) {
    for (int j = 0; j < n * b; j++) {
      // 大きなマスの番号iとjをそれぞれaとbで割って小さいマスの番号だと考える
      int r = i / a, c = j / b;

      // マス番号の縦横を合計し偶奇を判定
      // 奇数の時に黒く塗る
      if ((r + c) % 2 == 1) s[i][j] = '#';
    }
  }

  for (int i = 0; i < n * a; i++) {
    cout << s[i] << endl;
  }

  return 0;
}