#include <bits/stdc++.h>
using namespace std;

// 点数を全てマイナスにする
// マイナスにしたうえで点数でソートすると、
// 点数が絶対値の大きいものから順に昇順に並ぶとともに
// 同点の場合は受験番号の若いものから順に並ぶ
// これを利用して3パターンの合格者を抽出する

// 点数と受験番号をpair型の配列で格納したいため
// 型をusingで記憶
using P = pair<int, int>;

int main() {
  int n, x, y, z;
  cin >> n >> x >> y >> z;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++) cin >> b[i];
  vector<bool> ok(n);

  // 処理を関数にまとめる（ラムダ式）
  // pair要素Pの配列と合格者数numを引数にとる
  auto f = [&](vector<P> p, int num) {
    // pairのfirstを昇順にソート
    sort(p.begin(), p.end());

    // okの合格者番号のところをtrueにする
    for (int i = 0; i < num; i++) {
      ok[p[i].second] = true;
    }
  };

  // xの処理
  vector<P> p;
  // pair配列pのfirstをマイナスにしたもの（数学A）、secondに番号を代入
  for (int i = 0; i < n; i++) p.emplace_back(-a[i], i);
  // ラムダ式の処理をする（ソートして上からx人合格）
  f(p, x);

  // yの処理
  p = vector<P>();
  for (int i = 0; i < n; i++) {
    if (!ok[i]) {
      // 合格していなければ
      // pair配列pのfirstをマイナスにしたもの（英語B）、secondに番号を代入
      p.emplace_back(-b[i], i);
    }
  }
  // ラムダ式の処理をする（ソートして上からy人合格）
  f(p, y);

  // zの処理
  p = vector<P>();
  for (int i = 0; i < n; i++) {
    if (!ok[i]) {
      // 合格していなければ
      // pair配列pのfirstをマイナスにしたもの（数学Aと英語Bの合計）、secondに番号を代入
      p.emplace_back(-a[i]-b[i], i);
    }
  }
  // ラムダ式の処理をする（ソートして上からz人合格）
  f(p, z);

  // 合格している人を表示
  for (int i = 0; i < n; i++) {
    if (ok[i]) cout << i + 1 << endl;
  }
  return 0;
}