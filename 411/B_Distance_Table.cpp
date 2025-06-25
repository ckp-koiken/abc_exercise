#include <bits/stdc++.h>
using namespace std;

// TODO: 解説放送を確認
int main() {
  int N;
  cin >> N;
  vector<int> D(N - 1);
  for (int &d : D) cin >> d;

  // 3重ループで解答する
  // N-1行分繰り返す
  for (int i = 0; i < N - 1; i++) {
    // 隣の駅を示すための番号jを用意
    // jはiより1大きい
    for (int j = i + 1; j < N; j++) {
      int ans = 0;
      // iからjまで隣の駅の距離を足していく
      for (int k = i; k < j; k++) {
        ans += D.at(k);
      }
      // 表示。末尾以外なら空白を表示する
      cout << ans;
      if (j < (N - 1)) {
        cout << " ";
      } else {
        cout << endl;
      }
    }
  }
  return 0;
}