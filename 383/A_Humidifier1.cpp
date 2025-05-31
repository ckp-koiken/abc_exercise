#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> T(N);
  vector<int> V(N);
  for (int i = 0; i < N; i++) {
    cin >> T.at(i) >> V.at(i);
  }

  int w = 0;
  for (int i = 0; i < N; i++) {
    if (w == 0) {
      w += V.at(i);
    } else {
      w -= (T.at(i) - T.at(i - 1));
      if (w < 0) w = 0;
      w += V.at(i);
    }
  }

  cout << w << endl;
  return 0;
}

// another answer
// tとvの配列を作らずに、tを直前の水追加時間nowと比べて
// 水の残量を表現してやることでもう少し簡単にできる
// int volume = 0;  // 水の量
// int now = 0;  // 直前の水の追加時刻（最初は0）
// for (int i = 0; i < N; i++) {
//   int t, v;
//   cin >> t >> v;
//   // 前の水からの経過時間をtとnowで計算し、その分水の量を減らす
//   volume -= (t - now);
//   volume = max(volume , 0);  // 水の残量を0未満にならないように
//   volume += v;
//   now = t;
// }