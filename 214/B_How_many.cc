#include <bits/stdc++.h>
using namespace std;

int main() {
  int S, T;
  cin >> S >> T;

  int ans = 0;
  for (int a = 0; a <= 100; a++) {
    for (int b = 0; b <= 100; b++) {
      for (int c = 0; c <= 100; c++) {
        bool ok1 = a + b + c <= S;
        bool ok2 = a * b * c <= T;

        if (ok1 && ok2) ans++;
      }
    }
  }

  // another answer
  // for文の書き方を工夫できる
  // aの上限をSとしてa+b, a+b+cの上限をSとしてb、cを動かせば
  // 1つ目の条件をfor文内で検証できる
  // for (int a = 0; a <= S; a++) {
  //   for (int b = 0; a + b <= S; b++) {
  //     for (int c = 0; a + b + c <= S; c++) {
  //       if (a * b * c <= T) ans++;
  //     }
  //   }
  // }

  cout << ans << endl;
  return 0;
}