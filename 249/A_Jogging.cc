#include <bits/stdc++.h>
using namespace std;

// A+C、D+F秒の周期で同じ行動を繰り返すことを表現する
// 毎秒の移動距離を足していく
int main() {
  int A, B, C, D, E, F, X;
  cin >> A >> B >> C >> D >> E >> F >> X;

  int Taka = 0;
  int Aok = 0;

  // i秒~i+1秒後にかけての行動
  // iをA+Cで割った余りがAより小さいときBメートル歩く。そうでない場合動かない。
  // iをD+Fで割った余りがDより小さいときEメートル歩く。そうでない場合動かない。
  for (int i = 0; i < X; i++) {
    if (i % (A + C) < A) {
      Taka += B;
    }

    if (i % (D + F) < D) {
      Aok += E;
    }
  }

  if (Taka > Aok) {
    cout << "Takahashi" << endl;
  } else if (Taka < Aok) {
    cout << "Aoki" << endl;
  } else {
    cout << "Draw" << endl;
  }
  
  return 0;
}