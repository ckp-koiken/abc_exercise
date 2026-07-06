#include <bits/stdc++.h>
using namespace std;

int main() {
  int X, Y, L, R, A, B;
  cin >> X >> Y >> L >> R >> A >> B;

  vector<int> fee(24, -1);
  for (int i = 1; i <= 23; i++) {
    if (i >= L && i < R) {
      fee[i] = X;
    } else {
      fee[i] = Y;
    }
  }

  int ans = 0;
  for (int i = A; i < B; i++) {
    ans += fee[i];
  }

  // another answer
  // 配列を使わなくても単純にその時間の料金を足せばよい
  // for (int i = A; i < B; i++) {
  //   if (i >= L && i < R) {
  //     ans += X;
  //   } else {
  //     ans += Y;
  //   }
  // }

  cout << ans << endl;
  return 0;
}