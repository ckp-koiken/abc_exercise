#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t B;
  cin >> B;

  // 条件を満たすAを探す全探索の方針で考える
  // Bの上限は10^18なので、A^A = 10^18を満たす場合
  // Aは15と16の間にある。
  // Aの上限は15に設定すればいい(Aを1から15までのループ)
  for (int A = 1; A <= 15; A++) {
    // A^Aを調べていくが、pow()を使うと浮動小数点による
    // 誤差によって正解にならない
    // なので整数同士を整数回掛け合わせる

    // 初期値1
    int64_t tmp = 1;
    
    // Aの数だけAを掛け合わせる
    for (int i = 0; i < A; i++) {
      tmp *= A;
    }

    if (tmp == B) {
      cout << A << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}