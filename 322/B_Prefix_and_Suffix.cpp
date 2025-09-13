#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  string S, T;
  cin >> N >> M >> S >> T;

  bool is_prefix = S == T.substr(0, N);
  bool is_suffix = S == T.substr(M - N, N);

  if (is_prefix && is_suffix) {
    cout << 0 << endl;
  } else if (is_prefix && !is_suffix) {
    cout << 1 << endl;
  } else if (!is_prefix && is_suffix) {
    cout << 2 << endl;
  } else if (!(is_prefix && is_suffix)) {
    cout << 3 << endl;
  }

  // MEMO: 二項演算子で簡単に書ける
  // if (is_prefix) {
  //   cout << (is_suffix ? 0 : 1) << endl;
  // } else {
  //   cout << (is_suffix ? 2 : 3) << endl;
  // }
  return 0;
}