#include <bits/stdc++.h>
using namespace std;

int main() {
  int h, w, si, sj;
  cin >> h >> w >> si >> sj;
  vector<string> C(h);
  for (int i = 0; i < h; i++) cin >> C[i];
  string x;
  cin >> x;

  si--, sj--;

  // MEMO:
  // やり方は合ってるのに進行方向と境界のチェックが全部逆だった
  // 気をつけよう
  for (char xx : x) {
    if (xx == 'L') {
      int ti = si, tj = sj - 1;
      if (tj >= 0 && C[ti][tj] != '#') {
        sj--;
      }
    }
    if (xx == 'R') {
      int ti = si, tj = sj + 1;
      if (tj < w && C[ti][tj] != '#') {
        sj++;
      }
    }
    if (xx == 'U') {
      int ti = si - 1, tj = sj;
      if (ti >= 0 && C[ti][tj] != '#') {
        si--;
      }
    }
    if (xx == 'D') {
      int ti = si + 1, tj = sj;
      if (ti < h && C[ti][tj] != '#') {
        si++;
      }
    }
  }

  si++, sj++;

  cout << si << ' ' << sj << endl;

  return 0;
}