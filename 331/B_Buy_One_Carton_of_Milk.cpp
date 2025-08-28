#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S, M, L;
  cin >> N >> S >> M >> L;

  // Nが最高100個なのでどのパックでも最高20個程度買えばいい
  // S, M, Lそれぞれについて0から20個買うことを全探索する

  // あらかじめansに大きい整数を入れておく
  int ans = 1000000000;

  for (int i = 0; i <= 20; i++) {
    for (int j = 0; j <= 20; j++) {
      for (int k = 0; k <= 20; k++) {
        // 合計の個数がN個以上になったとき
        if (i * 6 + j * 8 + k * 12 >= N) {
          // 既存の金額と合計金額とを比べて低い方を保存する
          ans = min(ans, i * S + j * M + k * L);
        }
      }
    }
  }

  cout << ans << endl;
  return 0;
}
