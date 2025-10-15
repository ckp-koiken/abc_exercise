#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T;
  cin >> N >> T;

  vector<int> C(N);
  vector<int> R(N);
  for (int i = 0; i < N; i++) cin >> C[i];
  for (int i = 0; i < N; i++) cin >> R[i];

  map<int, int> ma;
  for (int i = 0; i < N; i++) {
    if (!ma.count(C[i])) {
      ma[C[i]] = R[i];
    } else {
      ma[C[i]] = max(R[i], ma[C[i]]);
    }
  }

  int max_point = 0;
  if (ma.count(T)) {
    max_point = ma[T];
  } else {
    int target_color = C[0];
    max_point = ma[target_color];
  }

  for (int i = 0; i < N; i++) {
    if (R[i] == max_point) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  return 0;
}

// another answer
// pairを使うとスマートに書ける
// int main() {
//   int n, t;
//   cin >> n >> t;
//   vector<int> c(n), r(n);
//   // 添え字を1始まりにしておくとプレイヤー番号を表示するときに便利
//   for (int i = 1; i <= n; i++) cin >> c[i];
//   for (int i = 1; i <= n; i++) cin >> r[i];

//   // カードの値と人の番号を管理するpairを作る
//   // カード値がtの時とそうでないときで2パターン
//   pair<int, int> tmax(-1, -1), lmax(-1, -1);

//   // 配列を順番に見てtの時とそうでない時でカードの最大値とプレイヤー番号を更新
//   for (int i = 1; i <= n; i++) {
//     if (c[i] == t) tmax = max(tmax, pair<int, int>(r[i], i));
//     if (c[i] == c[1]) lmax = max(lmax, pair<int, int>(r[i], i));
//   }

//   if (tmax.first != -1) {
//     // tがカード値としてあるとき
//     // tmax.firstが-1でないとき、tmaxからプレイヤー番号を表示
//     cout << tmax.second << endl;
//   } else {
//     // tがカード値としてないとき
//     // c[1]の最大値を求めるとき、（tmax.first == -1）lmaxからプレイヤー番号を表示
//     cout << lmax.second << endl;
//   }

//   return 0;
// }