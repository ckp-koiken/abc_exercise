#include <bits/stdc++.h>
using namespace std;

// 最後にSNSを始めた時間openを管理する
// 青木君が高橋君のデスクの後ろを通る時間aを時系列順に処理
// open < aならばopenからaまでSNSを見ていたことになるのでa-openを加算
// その後、次にSNSを開く時間をa+100と更新
// そうでないなら青木君は通りかかっただけなので何もしない
// 最後にopen < TならばopenからTまでSNSを見ていたことになるので答えにT-openを加算する

int main() {
  int n, t;
  cin >> n >> t;
  // SNSを見ていた合計時間
  int res = 0;
  // 最後にSNSを見始めた時間
  int open = 0;

  // SNSを見た回数だけ処理
  for (int i = 0; i < n; i++) {
    int a;
    cin >> a;

    // もしopen < aならばa-open分だけSNSを見ていた
    if (open < a) {
      res += (a - open);

      // 次にSNSを見るのは100分秒後なので100を加える
      open = a + 100;
    }
  }

  // 最後に就業時間tよりもopenが前ならば
  // その差の分だけSNSをみていたことになるのでt-openを加える
  if (open < t) {
    res += (t - open);
  }

  cout << res << endl;
  return 0;
}