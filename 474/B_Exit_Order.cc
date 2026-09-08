#include <bits/stdc++.h>
using namespace std;

// 座席番号Piの客は(Pi-1)/10番目のグループに属している
// ルールに従って退場した場合、i番目に退場した客はi/10番目のグループに属しているはず
// (Pi-1)/10とi/10が一致しているかを判定すればよい
int main() {
  int N;
  cin >> N;
  vector<int> P(N);
  string ans = "Yes";

  for (int i = 0; i < N; i++) {
    cin >> P[i];
    // iでルール上どのグループが退場中かを確認
    // P[i]でその人がどのグループに属しているかを確認（P[i]を添え字分1下げる）
    // 両者が一致していなければルールに従っていない
    if (i / 10 != (P[i] - 1) / 10) {
      ans = "No";
    }
  }

  cout << ans << endl;
  return 0;
}