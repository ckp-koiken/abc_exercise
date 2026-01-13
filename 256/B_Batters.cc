#include <bits/stdc++.h>
using namespace std;

// 移動前のコマ位置と移動後のコマ位置を
// それぞれ管理する配列を用意して更新する
// 複数のコマなどを同時に移動させる場合
// 移動前と移動後の二つの配列で処理した方が無難（1つだと大変）
int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];

  int P = 0;
  // 移動前のコマ位置を管理する配列pos
  // 一つのマスに複数のコマが存在する可能性があるので
  // 配列はboolではなくint型
  vector<int> pos(4);

  // N回操作する
  for (int i = 0; i < N; i++) {
    // 最初にコマ0にコマをおく
    pos[0]++;

    // 移動後のコマ位置を管理する配列next
    vector<int> next(4);

    // 4マスをチェック
    for (int j = 0; j < 4; j++) {
      // 現在マスに移動のA[i]を足す
      int nj = j + A[i];

      // 4以上ならマスを超えるのでPにその分を加える
      // そうでないならnextに状況を反映
      // 移動後のnext[nj]に現在位置のpos[j]を加える
      if (nj >= 4) {
        P += pos[j];
      } else {
        next[nj] += pos[j];
      }
      
    }
    // posにnextを代入して更新
    pos = next;
  }

  cout << P << endl;
  return 0;
}
