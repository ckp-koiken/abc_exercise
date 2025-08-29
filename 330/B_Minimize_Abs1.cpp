#include <bits/stdc++.h>
using namespace std;

// L <= A_i < RのときはA_i自身が最も差の絶対値が小さい
// A_i < L の時はLが最も差の絶対値が小さい
// R >= A_i の時はRが最も差の絶対値が小さい
int main() {
  int n, l, r;
  cin >> n >> l >> r;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a.at(i);
  }

  for (int i = 0; i < n; i++) {
    if (l <= a.at(i) && a.at(i) < r) {
      cout << a.at(i) << " ";
    } else if (a.at(i) < l) {
      cout << l << " ";
    } else if (r <= a.at(i)) {
      cout << r << " ";
    }
  }

  cout << endl;

  return 0;
}


// 問題文の通りに全探索するとTLEする
// Nの上限が2*10^5、Rが10^9なので全探索すると遅い
// int main() {
//   int N, L, R;
//   cin >> N >> L >> R;
//   vector<int> A(N + 1);

//   for (int i = 1; i <= N; i++) {
//     cin >> A.at(i);
//   }

//   for (int i = 1; i <= N; i++) {
//     int abs_num = 1e9;
//     int num;
//     for (int j = L; j <= R; j++) {
//       int tmp = abs(j - A.at(i));
//       if (abs_num > tmp) {
//         abs_num = tmp;
//         num = j;
//       }
//     }
//     cout << num << " ";
//   }

//   cout << endl;
//   return 0;
// }