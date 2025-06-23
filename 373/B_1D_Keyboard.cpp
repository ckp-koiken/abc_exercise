#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // キーそれぞれのAからの距離を記録
  vector<int> key(26);
  for (int i = 0; i < 26; i++) {
    // Aからの距離に応じてキーに0から25を振る
    key.at(S.at(i) - 'A') = i;
  }

  int ans = 0;
  // 現在のアルファベットと次のアルファベットとでキーの距離の差を取って足していく
  for (int i = 0; i < 25; i++) {
    ans += abs(key.at(i) - key.at(i + 1));
  }

  cout << ans << endl;
  return 0;
}