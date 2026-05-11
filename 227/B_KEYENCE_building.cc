#include <bits/stdc++.h>
using namespace std;

// ありえる面積をすべて列挙しておく
// 予想の面積を配列に格納しておき、あり得る面積ではない数を数える
int main() {
  int N;
  cin >> N;
  vector<int> S(N);
  for (int i = 0; i < N; i++) cin >> S[i];

  // ありえる面積を列挙
  // 重複してほしくないのでsetで格納
  set<int> se;

  // Sの上限が1000なので、aとbを1000回回す
  for (int a = 1; a <= 1000; a++) {
    for (int b = 1; b <= 1000; b++) {
      int tmp = 4 * a * b + 3 * a + 3 * b;
      se.insert(tmp);
    }
  }

  // あり得る面積でないものを数える
  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (!se.count(S[i])) ans++;
  }

  cout << ans << endl;
  return 0;
}