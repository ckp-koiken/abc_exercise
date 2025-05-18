#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int length = S.size();
  int ans = 0;

  // 文字列をi, j, kごとに全探索
  // iとjとkはそれぞれ1文字ずつ開始位置をずらす
  // ずらさないとjとkがiよりも後ろを探してしまうことがある
  for (int i = 0; i < length; i++) {
    for (int j = i + 1; j < length; j++) {
      for (int k = j + 1; k < length; k++) {
        if (S.at(i) == 'A' && S.at(j) == 'B' && S.at(k) == 'C' &&
            j - i == k - j) {
          ans++;
        }
      }
    }
  }

  cout << ans << endl;

  return 0;
}