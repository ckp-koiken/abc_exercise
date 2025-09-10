#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> w(n), x(n);
  for (int i = 0; i < n ; i++) {
    cin >> w.at(i) >> x.at(i);
  }

  // 会議の開始時刻を0時始まりから23時始まりまで24通り試す（全探索）
  // 9時から18時に開催時間が収まっている拠点の参加人数を足していって
  // 最大のものを選ぶ

  int ans = 0;
  // 開始時刻0時から23時まで24通りのtを試す
  for (int t = 0; t < 24; t++) {
    // 会議に参加できる人数
    // 最初は0人
    int now = 0;

    // 拠点の数nだけ会議の開催時間に収まっているかどうかを試す
    for (int i = 0; i < n; i++) {
      // 拠点ごとの会議の開始時刻（現地時間）をyとする
      // それぞの拠点の時刻はx.at(i)だけずれる
      // 開始時刻tにx.at(i)だけ足し、24で割った余りが現地時間y
      int y = (x.at(i) + t) % 24;

      // 現地時間yが9時以上18時未満に収まっていればその拠点は会議に参加できる
      // 参加できる拠点の人数w.at(i)を足す
      if (y >= 9 && y < 18) {
        now += w.at(i);
      }
    }
    // 開始時刻tごとに人数の多いものに更新していく
    ans = max(ans, now);
  }
  cout << ans << endl;
  return 0;
}