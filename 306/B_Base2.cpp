#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int> A(64);
  for (int &a : A) cin >> a;

  uint64_t ans = 0;
  for (int i = 0; i < 64; i++) {
    if (A[i] == 0) {
      ans += 0;
    } else {
      int64_t two = 1;
      for (int j = 0; j < i; j++) two *= 2;
      ans += two;
    }

  }

  cout << ans << endl;
  return 0;
}

// another answer
// シフト演算子を使うとスマートに書ける

// // 型の名前を簡略化
// using ull = unsigned long long;
// 
// int main() {
//   ull ans = 0;
//   for (int i = 0; i < 64; i++) {
//     ull a;
//     cin >> a;
//     
//     // 2の累乗の数だけaを左シフトする
//     // aが0の場合どんなに左シフトしても0のまま
//     ans += a << i;
//   }
//   cout << ans << endl;
//   return 0;
// }
