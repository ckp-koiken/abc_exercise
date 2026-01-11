#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, Q;
  cin >> N >> K >> Q;

  // コマの位置を管理する配列
  vector<int> pos(K);
  for (int i = 0; i < K; i++) {
    cin >> pos[i];
    // 添え字に合わせる
    pos[i]--;
  }

  // Q回の操作を行う
  while (Q--) {
    int L;
    cin >> L;

    // コマの番号を添え字に合わせる
    int i = L - 1;

    // コマが右端にあるなら何もしない
    if (pos[i] == N - 1) continue;

    // 右隣にコマがいないなら動ける
    // iが最も右のコマであるとき
    // またはpos[i]のコマが隣に動いたときpos[i+1]にぶつからなければ動ける
    if (i == K - 1 || pos[i] + 1 < pos[i + 1]) {
      pos[i]++;
    }
  }

  // コマの位置を表示
  for (int i = 0; i < K; i++) {
    cout << pos[i] + 1 << ' ';
  }

  cout << '\n';
  return 0;
}
