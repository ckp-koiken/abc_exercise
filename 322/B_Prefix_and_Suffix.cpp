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
  return 0;
}