#include <bits/stdc++.h>
using namespace std;

int sum_d(int x) {
  string s = to_string(x);

  int cnt = 0;
  for (char c : s) {
    cnt += c  - 48;
  }

  return cnt;
}

// another answer
// 10で割るタイプの関数を定義してもよい
// main関数内でラムダ式を使って実装してもよい
// int sum_d(int x) {
//   int res = 0;
//   while (x) {
//     res += x % 10;
//     x /= 10;
//   }
//   return res;
// }

int main() {
  int N;
  cin >> N;

  int A0 = 1;
  for (int i = 1; i < N; i++) {
    A0 += sum_d(A0); 
  }
  cout << A0 << endl;

  return 0;
}
