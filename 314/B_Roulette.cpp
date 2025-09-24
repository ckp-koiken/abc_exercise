#include <bits/stdc++.h>
using namespace std;

// その人が当たったかどうかを確認する（A_iにXが含まれるか）
// 当たった中で何個賭けたか（C_iの数）を確認し、
// 最小の人を列挙する
int main() {
  int n;
  cin >> n;

  // 賭けた個数を保存する配列
  vector<int> c(n);

  // i番目の人が何の目に賭けたかを保存する二次元配列
  // 最初は単にa(n)としておいて、内側の配列要素を指定しない
  vector<vector<int>> a(n);

  // i番目の人の賭けをループで受け取る
  for (int i = 0; i < n; i++) {
    // 個数を受け取る
    cin >> c.at(i);

    // 賭けた目をa.at(i)で受け取る
    // このとき内側の配列要素として、
    // 賭けた個数分(c.at(i))の配列を指定する
    // resize()でも指定できる
    a.at(i) = vector<int>(c.at(i));

    // j番目の賭けの目を受け取る
    for (int j = 0; j < c.at(i); j++) {
      cin >> a.at(i).at(j);
    }
  }
  int x;
  cin >> x;

  // 当たった人（a.at(i).at(j)のどれかがxと等しい賭け方をした人）を調べる配列
  vector<bool> p(n);
  for (int i = 0; i < n; i++) {
    // 最初falseにしておいて
    p.at(i) = false;

    // j個賭けた目を調べて当たっていればp.at(i)をtrueにする
    for (int j = 0; j < c.at(i); j++) {
      if (a.at(i).at(j) == x) p.at(i) = true;
    }
  }

  // 当たっている人の中で賭けた目の数が最小の人を調べる
  // cminに大きな数を入れておく
  int cmin = 100;
  for (int i = 0; i < n; i++) {
    // 当たっている人の中でc.at(i)との比較で最小値を更新
    if (p.at(i)) cmin = min(cmin, c.at(i));
  }

  // 当たっていてp.at(i)、かつ、賭けた数c.at(i)が最小値cminと等しい人を
  // 昇順に配列ansに追加（Nは1以上なのでiに1を加える）
  vector<int> ans;
  for (int i = 0; i < n; i++) {
    if (p.at(i) && c.at(i) == cmin) ans.push_back(i + 1);
  }

  // ansの大きさと内訳を表示
  cout << ans.size() << endl;
  for (int i : ans) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}