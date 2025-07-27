#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, L, R;
  cin >> N >> L >> R;

  int r = R;
  for (int i = 1; i <= N; i++) {
    if (i < L || i > R) {
      cout << i << " ";
    } else {
      cout << r << " ";
      r--;
    }
  }

  cout << endl;

  return 0;
}

// another answer
// 逆の部分も含め、直接配列を作ってしまう
// int main() {
//   int n, l, r;
//   cin >> n >> l >> r;
//   vector<int> a(n);

//   for (int i = 0; i < n; i++) {
//     a.at(i) = i + 1;
//   }
//   // reverse()に反転したい区間を渡す
//   // 反転を開始したい位置の添え字(l - 1)と反転を終了した次の添え字(r)を渡す（イテレータ）
//   // 半開区間
//   reverse(a.begin() + (l - 1), a.begin() + r);

//   for (int x : a) {
//     cout << x << " ";
//   }

//   cout << endl;
//   return 0;
// }