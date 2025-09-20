#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, P;
  cin >> N >> M >> P;

  int moon = (N - M) / P + 1;

  if (N < M) {
    cout << 0 << endl;
  } else {
    cout << moon << endl;
  }
  
  return 0;
}

// another answer
// 実際にシミュレーションしてみる
// m日目に最初の月を見て、そこからp日ごとに月をみる回数を数える
// n日に達するまで続ける
// int main() {
//   int n, m, p;
//   cin >> n >> m >> p;

//   int res = 0;
//   while (m <= n) {
//     res++;
//     m += p;
//   }

//   cout << res << endl;
//   return 0;
// }