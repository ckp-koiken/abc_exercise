#include <bits/stdc++.h>
using namespace std;

// 整数Mを3の累乗の合計で表現せよ、という問題に読み替える
// 累乗の数の大きいものから順にmから3の累乗を抽出しMから除いていく
// 除いた数からまた3の累乗を抽出
// 累乗の回数を数列で答えればよい
int main() {
  int m;
  cin >> m;

  // 3の累乗の指数を管理する配列。これが答えになる。
  vector<int> a;

  // Aの制約から10乗が最大値
  // 10から順に調べて小さくしていく
  for (int i = 10; i >= 0; i--) {
    // 3の累乗の合計を管理する変数（最初は0乗）
    int x = 1;

    // iの数だけ3を累乗
    for (int j = 0; j < i; j++) x *= 3;

    // mがx以上の時、mからxを除く
    // そのたびに配列aにiを挿入
    while (m >= x) {
      m -= x;
      a.push_back(i);
    }
  }

  // aの要素数がNになる
  cout << a.size() << endl;

  // aの中身を出力
  for (int na : a) {
    cout << na << ' ';
  }
  cout << '\n';

  return 0;
}