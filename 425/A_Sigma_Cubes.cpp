#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int ans = 0;
  for (int i = 1; i <= N; i++) {
    int left = pow(-1, i);
    int right = pow(i, 3);
    ans +=  left * right;
  }

  cout << ans << endl;
  return 0;
}

// another answer
// iが偶数のとき第1項が1になるのでiの3乗
// iが奇数のとき第1項がｰ1になるのでｰ1*iの3乗になる
// int main() {
//   int n;
//   cin >> n;

//   int ans = 0;
//   for (int i = 1; i <= n; i++) {
//     if (i % 2 == 0) {
//       ans += i * i * i;
//     } else {
//       ans += -1 * i * i * i;
//     }
//   }

//   cout << ans << endl;
//   return 0;
// }