#include <bits/stdc++.h>
using namespace std;

// 参加者×参加者のグリッドを考える
// 参加者が隣合って座ったらグリッドにフラグを立てる
// フラグの立っていない場所の数を数える
int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> A(M, vector<int>(N));
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      cin >> A[i][j];
    }
  }

  // このあと参加者の番号でグリッドを作る
  // グリッドはインデックス0から始まるので
  // Aを1ずつ減らしておく
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N; j++) {
      A[i][j]--;
    }
  }

  // フラグを立てるためのグリッド
  // M回の撮影ごとに参加者が隣合う場所N-1を見る
  vector<vector<bool>> G(N, vector<bool>(N));
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < N - 1; j++) {
      // 配列Aを参照して隣合うところにフラグを立てる
      G[A[i][j]][A[i][j + 1]] = true;
    }
  }

  int ans = 0;
  // グリッドを確認する
  // y < xとして書いて2人組を全部試す
  for (int x = 0; x < N; x++) {
    for (int y = 0; y < x; y++) {
      // trueのところはスルーする
      // G[x][y]か反対のG[y][x]のどちらかがtrueであればよい
      if (G[x][y] || G[y][x]) continue;

      // そうでないところをansでカウント
      ans++;
    }
  }
  cout << ans << endl;

  return 0;
}
