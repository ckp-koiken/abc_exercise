#include <bits/stdc++.h>
using namespace std;

// ピザを回すのではなく、切り込みをいれる位置を回転させることを考える
// 切り込みを入れる位置を角度で管理して、0度から順番に切り込みを入れる
// 0 + 90 = 90、90 + 180 = 270のように角度の合計を記録してゆく
// 場合によっては360度を超えてしまうので、角度合計は360で割った余りを記録する
// 一番後ろに360を追加して（最後に切りこみを入れた位置と0度の位置の差をとるため）ソートする
// 角度と角度の間が最も大きいものを答えとして表示すればいい
int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  
  // 切り込み位置を記録する配列
  vector<int> cut;
  
  // 最初に0を記録
  cut.push_back(0);
  
  // 角度の合計値を管理
  int sum = 0;
  
  for (int i = 0; i < n; i++) {
    // 角度を足していく
    sum += a[i];
    // 360度を超えることがあるので余りをとる
    cut.push_back(sum % 360);
  }
  
  // 最後に360を記録
  cut.push_back(360);
  
  // 角度の小さいものから順にソート
  sort(cut.begin(), cut.end());
  int ans = 0;
  
  // 最後に360を追加したのでn+1回ループ
  for (int i = 0; i <= n; i++) {
    // 1つ先の角度と今の角度の差を記憶
    int now = cut[i + 1] - cut[i];
    
    // 角度の差の最大値を答えにする
    ans = max(ans, now);
  }
  
  cout << ans << endl;
  return 0;
}