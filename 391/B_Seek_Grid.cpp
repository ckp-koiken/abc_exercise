#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<string> S(N), T(M);
  for (int i = 0; i < N; i++) {
    cin >> S.at(i);
  }
  for (int i = 0; i < M; i++) {
    cin >> T.at(i);
  }

  // aとbをそれぞれN-M+1まで全探索
  // 大きいSの中の一部Tと等しくなりうる領域を探索
  // 等しくなりうる領域の左上a, bから順に探索
  for (int a = 0; a < N - M + 1; a++) {
    for (int b = 0; b < N - M + 1; b++) {
      bool ok = true;
      for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
          // Sのa+i, b+jとTのi, jが一つでも合っていなければfalse
          // 条件のa+i-1, b+j-1は添え字a, bが0スタートなので-1が不要
          // 条件に合わないものがあればfalse
          if (S.at(a + i).at(b + j) != T.at(i).at(j)) {
            ok = false;
          }
        }
      }
      // trueのとき添え字に1を足して座標を出力
      if (ok) {
        cout << a + 1 << ' ' << b + 1 << endl;
      }
    }
  }

  return 0;
}