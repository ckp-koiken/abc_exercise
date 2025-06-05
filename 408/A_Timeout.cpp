#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S, T;
  cin >> N >> S;

  double last_t = 0;
  for (int i = 0; i < N; i++) {
    cin >> T;
    double limit_t = S + 0.5;
    if ((T - last_t) >= limit_t) {
      cout << "No" << endl;
      return 0;
    } else {
      last_t = T;
      continue;
    }
  }

  // another answer
    // tに関する配列を作成して（最初だけ0）一つ先と比較する
    // その差がSより大きければ寝てしまう
    // T_i + S + 0.5 < T_{i+1}に寝るので
    // T_{i+1} - T_i > Sだけ比べれば良い
  // vector<int> t(N + 1, 0);
  // for (int i = 1; i <= N; i++) {
  //   cin >> t.at(i);
  // }
  // for (int i = 1; i <= N; i++) {
  //   if (t.at(i) - t.at(i - 1) > S) {
  //     cout << "No" << endl;
  //     return 0;
  //   }
  // }

  cout << "Yes" << endl;
  return 0;
}