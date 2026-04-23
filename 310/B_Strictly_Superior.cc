#include <bits/stdc++.h>
using namespace std;

// jがiの上位互換のとき
// P_i >= P_j
// F_i in F_j である
// F_iから一つずつ要素を取り出して確認し、F_jに入っていないとNG
int main() {
  int n, m;
  cin >> n >> m;

  // 価格pは1次元の配列
  vector<int> p(n);
  // 機能は2次元の配列に収める
  vector<vector<int>> f(n);

  // 製品n個分入力
  for (int i = 0; i < n; i++) {
    // cを読み取って要素数c個の配列を作成
    // f[i]の中に配列を代入（二次元配列）
    int c;
    cin >> p[i] >> c;
    f[i] = vector<int>(c);

    // c個分機能を読み取る
    for (int j = 0; j < c; j++) {
      cin >> f[i][j];
    }
  }

  // 製品n個分の機能同士を比較する
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      // iとjが等しくないとき（別々の製品であるとき）
      if (i != j) {
        // 価格がjの方が高いならスキップ
        if (p[i] < p[j]) continue;

        // 上位互換判定の初期値をtrueに
        bool ok = true;

        // iの機能を一つ一つみていく
        for (int e : f[i]) {
          // fの機能の中にiの機能があるかを確認
          // f[j]をfindして.end()まで言っていたら機能がないということなのでokをfalseに
          if (find(f[j].begin(), f[j].end(), e) == f[j].end()) ok = false;
        }

        // okでないならスキップ
        if (!ok) continue;

        // 価格も機能も全く同じならばスキップ
        if (p[i] == p[j] && f[i] == f[j]) continue;

        // ここまで全部通過するならばYesを表示して終了（上位互換）
        cout << "Yes" << endl;
        return 0;
      }
    }
  }

  // ループが最後まで回ったらNo
  cout << "No" << endl;
  return 0;
}