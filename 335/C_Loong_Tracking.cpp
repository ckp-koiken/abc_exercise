#include <bits/stdc++.h>
using namespace std;

// xとy座標を管理するためのpair型を作成
// 配列psを宣言するときに面倒なのでPとして省略
using P = pair<int, int>;

// x方向、y方向への移動を管理するための配列を用意しておくと便利
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};

// 問題文の状況をそのまま再現する
// パーツのx座標とy座標を配列で管理して移動後の座標を追加する
// しかし先頭に新しい座標を追加していくと計算量が多くなりTLEになる
// そこで配列を逆にして管理し、新しい座標を末尾に追加する
// つまり移動するたびに配列が逆順に伸びていき、
// 参照するときに末尾から該当の座標を参照する方法を採用する

int main() {
  int N, Q;
  cin >> N >> Q;

  // pair型を要素に持つ配列
  // 座標を管理
  vector<P> ps;

  // N個のパーツの座標を初期化
  // 初期値は全て(x, 0)
  for (int i = 0; i < N; i++) {
    // emplace_backは実引数がコンテナの要素と型が異なるときに早い
    // psはmap型で構成されているのに実引数は整数
    ps.emplace_back(i + 1, 0);
  }
  // 配列を逆にする
  reverse(ps.begin(), ps.end());

  // 移動クエリを受け取った時に移動させるためのmapを用意する
  // dx, dyの添え字を割り当てる
  map<char, int> mp = {
    {'L', 0}, {'R', 2}, {'U', 3}, {'D', 1}
  };

  // クエリを処理
  for (int qi = 0; qi < Q; qi++) {
    int type;
    cin >> type;
    if (type == 1) {
      char c;
      cin >> c;
      // 移動クエリに対応した番号を取得
      int v = mp[c];
      // 配列psの末尾要素の参照を取得(.back())
      // auto[x, y]でpair要素を分解して取得
      // この書き方はc++17以降でしかできないのに注意
      auto [x, y] = ps.back();
      // 末尾に頭の移動を反映させた座標を追加
      ps.emplace_back(x + dx[v], y + dy[v]);
      // 残りの頭以外のパーツは移動前に次のパーツがあった場所に移動するので
      // そのままにして参照するときに座標位置を指定
    } else {
      int p;
      cin >> p;
      // 末尾からみて該当の座標の要素を取得
      // 逆順になっているので
      // 配列全体の長さからpを引いたものが取得すべき座標
      auto [x, y] = ps.at(ps.size() - p);
      cout << x << " " << y << endl;      
    }
  }
  return 0;
}