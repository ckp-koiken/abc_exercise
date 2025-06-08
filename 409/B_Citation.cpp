#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  // 0から順番にxをみていく（Nまで）
  // 同時にAの要素と比較してx以上のものがあればカウント
  // カウント数がx以上のものがあればそれを答えとする
  int ans = 0;
  for (int x = 0; x <= N; x++) {
    int cnt = 0;
    for (int i = 0; i < N; i++) {
      if (x <= A.at(i)) {
        cnt++;
      }
    }
    if (x <= cnt) {
      ans = x;
    }
  }
  cout << ans << endl;

  // MEMO: 公式解説
  // 大きいものから順にやっているだけで上と同様
  // for (int x = N; x >= 0; x--) {
  //   int count = 0;
  //   for (auto a : A) {
  //     if (a >= x) count++;
  //   }
  //   if (count >= x) {
  //     cout << x << endl;
  //     break;
  //   }
  // }
  return 0;
}