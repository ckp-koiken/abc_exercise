#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int n = (int)S.size();

  for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) {
      swap(S[i - 1], S[i]);
    }
  }

  // another answer
  // 問題文通りの実装（添え字0始まり）
  // for (int i = 0; i < n / 2; i++) {
  //   swap(S[2 * i], S[2 * i + 1]);
  // }

  cout << S << endl;
  return 0;
}