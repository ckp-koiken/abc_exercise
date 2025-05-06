#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> P(N);
  for (int i = 0; i < N; i++) {
    cin >> P.at(i);
  }

  vector<int> ans(N, -1);  // 順位を入れる配列
  int r = 1;

  while (1) {
    int x = -1;  // 順位が未確定の人の最大得点
    for (int i = 0; i < N; i++) {
      if (ans.at(i) != -1) {  // ansが-1なら順位未確定
        continue;
      }
      x = max(x, P.at(i));  // 順位が未確定な人の最大得点を探す
    }

    if (x == -1) {  // 最大得点を探すことができなければループを終了
      break;
    }

    int k = 0;  // 得点xの人数
    for (int i = 0; i < N; i++) {
      if (P.at(i) == x) {
        ans.at(i) = r;  // 該当する得点の番目に順位を入れる
        k++;  // 該当する得点の人がいるたびにkを増やす
      }
    }
    r += k; // rに人数を加える
  }

  for (int i = 0; i < N; i++) {
    cout << ans.at(i) << endl;
  }

  // another answer
  // その点数よりも高い点数があるときにrを1つずつ加える
  // 計算量に注意
  // for (int i = 0; i < N; i++) {
  //   for (int j = 0; j < N; j++) {
  //     if (P.at(i) < P.at(j)) {
  //       r++;
  //     }
  //   }
  // }
  // cout << r << endl;

}
