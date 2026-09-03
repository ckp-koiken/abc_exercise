#include <bits/stdc++.h>
using namespace std;

// 実際にシミュレーションを行う
// 直近M日間で食べたカロリーの総和を求める
// 配列Aを実際に食べたカロリーの履歴としても扱い、差分で更新すると早い
int main() {
  int N, M;
  // Kは大きいのでint64_tにする
  int64_t K;
  cin >> N >> M >> K;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];

  // カロリーの総和も大きいのでint64_tにする
  int64_t sum = 0;
  for (int i = 0; i < N; i++) {
    // もしiがM以上ならばM日前のカロリーを総和から消す
    if (i >= M) sum -= A[i - M];

    // 総和にi日目のカロリーを足す
    // K以下なら普通に足して"Yes"を表示
    if (sum + A[i] <= K) {
      sum += A[i];
      cout << "Yes" << endl;
    } else {
      // Kを超えるならおやつを食べないのでi日目のカロリーを0に
      // 0にしないとsum -= A[i - M]の部分で不都合
      // "No"を表示
      A[i] = 0;
      cout << "No" << endl;
    }
  }
  return 0;
}