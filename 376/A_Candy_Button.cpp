#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, C;
  cin >> N >> C;

  // キャンディーの数（初期1個）と前回もらった時間を保存
  // 最初は必ずキャンディーをもらえるので一番最初のタイミングをpreに読み取る
  int ans = 1, pre;
  cin >> pre;
  for (int i = 1; i < N; i++) {
    // その次の時間からTを受け取る
    int T;
    cin >> T;
    // Tとpreの差がC以上ならキャンディーをもらえる
    if (T - pre >= C) {
      ans++;
      pre = T;
    }
  }

  cout << ans << endl;

  return 0;
}