#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int n = S.size();

  // 文字列Sの部分文字列についてすべて探索し
  // 条件に合うtの充填率を逐一求めて最大値を計算する
  double ans = 0;

  // 右端(r)を探索するループ
  for (int r = 0; r < n; r++) {
    // 右端がtでなければループを飛ばす
    if (S.at(r) != 't') continue;
    
    // 左端(l)を探索するループ
    // 左と右は最低1文字間が空いている必要があるので
    // 左の探索範囲はrよりも1文字少ない
    for (int l = 0; l < r - 1; l++) {
      // 左端がtでなければループを飛ばす
      if (S.at(l) != 't') continue;

      int cnt = 0;          // tの数
      int len = r - l - 1;  // 部分文字列の左右を除いた幅
      
      // tの数を数える
      // 部分文字列のうち左右端のtはカウントしない
      for (int i = l + 1; i < r; i++) {
        if (S.at(i) == 't') cnt++;
      }

      // 充填率をdouble型で計算してtmpに
      // 最大値を常に書き換える
      double tmp = (double)cnt / len;
      ans = max(tmp, ans);
    }
  }

  printf("%.15lf\n", ans);
  return 0;
}
