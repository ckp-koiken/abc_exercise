#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N;
  cin >> N;

  bitset<60> bs(N);

  int ans = 0;
  for (int i = 0; i < 60; i++) {
    if (bs.test(i) == 0) {
      ans++;
    } else {
      break;
    }
  }

  cout << ans << endl;
  return 0;
}

// another answer
// nをi(>0)だけ順番に右シフトする
// 1と論理積をとって1になった時のiが答え
// nを固定してiを左シフトするのでも良い
// 2進数nの各桁と1の論理積を順番にとって判断する方法
// int main() {
//   int n;
//   cin >> n;
//   for (int i = 0;; i++) {
//     if ((n >> i) & 1) {
//       cout << i << endl;
//       return 0;
//     }
//   }
// }