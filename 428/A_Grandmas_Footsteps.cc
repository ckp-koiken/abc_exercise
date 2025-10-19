#include <bits/stdc++.h>
using namespace std;

int main() {
  int S, A, B, X;
  cin >> S >> A >> B >> X;

  int dis = 0;
  int tmp = 0;
  for (int i = 0; i < X; i++) {
    if (tmp < A) {
      dis += S;
      tmp++;
    } else {
      tmp++;
      if (tmp == A + B) tmp = 0;
    }
  }

  cout << dis << endl;
  return 0;
}

// another answer
// 算数的に解く
// a+bの反復とa+bの余りに注目する
// int main() {
//   int s, a, b, x;
//   cin >> s >> a >> b >> x;

//   // 進んだ回数
//   int len = 0;

//   // xをa+bで割った商にaをかけたものが進んだ回数
//   len += (x / (a + b)) * a;

//   // 反復できない程度の時間しか残されていない場合
//   // xをa+bで割った余りとaを比較して小さい方が進んだ回数
//   len += min(x % (a + b), a);

//   // 進んだ回数にsをかけたものが移動距離
//   int ans = len * s;
//   cout << ans << endl;

//   return 0;
// }