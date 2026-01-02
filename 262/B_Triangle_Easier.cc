#include <bits/stdc++.h>
using namespace std;

// 頂点i, jを結ぶ辺があるかどうかを表す二次元配列を作る
// i * jのトーナメントのような二次元配列で結ぶ辺があればフラグを立てる
int main() {
  int n, m;
  cin >> n >> m;

  // 頂点i, jを結ぶ辺があるかどうかを管理するbool型の二次元配列
  vector<vector<bool>> adj(n, vector<bool>(n));

  // m辺の入力を読む
  for (int i = 0; i < m; i++) {
    // 頂点uとvが結ばれている
    int u, v;
    cin >> u >> v;

    // 配列の添え字と一致させたいので1を引く
    u -= 1; v -= 1;

    // adjのu行v列とv行u列をtrueにする
    // uとvが結ばれていることを表現
    adj[u][v] = adj[v][u] = true;
  }

  // 条件を満たす数を記録
  int ans = 0;

  // 頂点i, j, kがi < j < kを満たしつつ結ばれている組み合わせを全探索する
  // iのループからj,kを1ずつずらしてi,j,kを別々に探索（同じものをスキップする）
  for (int i = 0; i < n; i++) {
    for (int j = i + 1; j < n; j++) {
      for (int k = j + 1; k < n; k++) {
        // i,jとj,kとk,iがtrueならi->j->kで結ばれている
        if (adj[i][j] && adj[j][k] && adj[k][i]) {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}