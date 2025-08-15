#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  for (int i = 0; i < 2 * N + 1; i++) {
    if (i % 2 == 0) {
      cout << 1;
    } else if (i % 2 == 1) {
      cout << 0;
    }
  }

  // another answer
  // 1を1回出力して01をN回出力すればよい
  // cout << "1";
  // for (int i = 0; i < N; i++) {
  //   cout << "01";
  // }

  cout << endl;
  return 0;
}