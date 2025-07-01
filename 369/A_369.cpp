#include <bits/stdc++.h>
using namespace std;

int main() {
  int A, B;
  cin >> A >> B;

  int ans = 0;
  for (int i = -10000; i < 10000; i++) {
    if ((A - i) == (B - A)) {
      ans++;
    } else if ((i - A) == (B - i)) {
      ans++;
    } else if ((B - A) == (i - B)) {
      ans++;
    }
  }

  cout << ans << endl;
  return 0;
}

// another answer
// 数列の性質からAとBの値だけで判断する
// int main() {
//   int a, b;
//   cin >> a >> b;
//   if (a == b) {
//     cout << 1 << endl;
//   } else if ((a + b) % 2 == 0) {
//     cout << 3 << endl;
//   } else {
//     cout << 2 << endl;
//   }
//   return 0;
// }