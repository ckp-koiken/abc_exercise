#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int64_t num = 1;

  for (int i = 0; i < N; i++) {
    num *= 2;
  }

  cout << num << endl;

  // another answer
  // 2の累乗はビットのシフトでも計算できる
  // cout << (1 << N) << endl;
  return 0;
}
