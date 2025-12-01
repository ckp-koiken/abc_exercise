#include <bits/stdc++.h>
using namespace std;

// グラフ理論の隣接リストを表示する
// つながっている都市同士を二次元配列で管理して内容を表示
int main() {
  int N, M;
  cin >> N >> M;

  // 道で結ばれた都市を管理する二次元配列Aを用意
  // 都市Aと結ばれた都市B群を配列で処理、の要領
  vector<vector<int>> A(N);

  // M行分記録
  for (int i = 0; i < M; i++) {
    // 都市Aをu、都市Bをv
    int u, v;
    cin >> u >> v;

    // 該当する都市Aの配列要素にBを
    // 該当する都市Bの配列要素にAを追加
    // 添え字の分1を引く
    A[u - 1].push_back(v);
    A[v - 1].push_back(u);
  }

  // N行表示
  for (int i = 0; i < N; i++) {
    // 表示のたびに配列要素をソートする
    sort(A[i].begin(), A[i].end());

    // 配列要素の大きさを表示（結ばれた都市の数）
    cout << A[i].size();

    // 配列要素を順番に表示
    for (int a : A[i]) {
      cout << ' ' << a;
    }
    cout << '\n';
  }

  return 0;
}