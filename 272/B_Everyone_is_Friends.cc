#include <bits/stdc++.h>
using namespace std;

// 問題文の通りにプログラムを書こうとすると
// 組み合わせを一つ一つ確認しなければいけないので結構大変
// どの参加者同士が舞踏会で共演したかを確認するための表を作って
// 共演した組み合わせが登場したらフラグを立てる
// データの持ち方を工夫するとプログラムが簡単になる
int main() {
  int n, m;
  cin >> n >> m;

  // 舞踏会で共演した組み合わせを管理する二次元配列
  vector<vector<bool>> d(n, vector<bool>(n));

  // m回の舞踏会分読み込む
  for (int mi = 0; mi < m; mi++) {
    int k;
    cin >> k;

    // 参加者分の要素を持つ配列
    vector<int> x(k);

    // 舞踏会ごとに参加者を配列に記憶
    for (int i = 0; i < k; i++) {
      cin >> x[i];
    }

    // 組み合わせ確認の配列のために、添え字用に要素を1減らす
    for (int i = 0; i < k; i++) {
      x[i]--;
    }

    // 参加者を使って組み合わせを確認して
    // 組み合わせがある場合はtrueにする
    for (int i = 0; i < k; i++) {
      for (int j = 0; j < k; j++) {
        d[x[i]][x[j]] = true;
      }
    }
  }

  // 組み合わせが一つでも存在しなければ"No"を表示してプログラムを停止
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (!d[i][j]) {
        cout << "No" << endl;
        return 0;
      }
    }
  }

  // 上の二重ループを通過したら"Yes"
  cout << "Yes" << endl;
  return 0;
}