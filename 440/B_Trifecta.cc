#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> T(N);
  for (int i = 0; i < N; i++) cin >> T[i];

  vector<int> A = T;
  sort(A.begin(), A.end());

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < N; j++) {
      if (A[i] == T[j]) {
        cout << j + 1 << ' ';
      }
    }
  }

  cout << '\n';
  return 0;
}

// another answer
// pair<int, int>のvectorを使えばもう少しシンプルに書ける
// int main() {
//   int n;
//   cin >> n;
//
//   // タイムと番号をpairで管理する配列を作成
//   vector<pair<int, int>> ti;
//   for (int i = 0; i < n; i++) {
//     int t;
//     cin >> t;
//     // ゴールまでのタイムと番号をpairで追加
//     ti.push_back({t, i + 1});
//   }
//
//   // タイム(ti.first: t)順にソート
//   sort(ti.begin(), ti.end());
//
//   // 順位(ti.second)を上から3位分表示
//   for (int i = 0; i < 3; i++) {
//     cout << ti[i].second << ' ';
//   }
//   cout << '\n';
//   return 0;
// }
