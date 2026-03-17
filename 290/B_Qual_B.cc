#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  string S;
  cin >> N >> K >> S;

  for (char c : S) {
    if (K > 0) {
      if (c == 'o') {
        cout << 'o';
        K--;
      } else {
        cout << 'x';
      }
    } else {
      cout << 'x';
    }
  }

  cout << '\n';

  // another answer
  // 空の文字列tを別途用意して条件通りに文字列を作り直しても良い
  /*
  string t;
  int cnt = 0;
  for (int i = 0; i < N; i++) {
    if (S[i] == 'x') {
      t += 'x';
    } else {
      if (cnt < K) {
        t += 'o';
        cnt++;
      } else {
        t += 'x';
      }
    }
  }
  cout << t << endl;
  */
  return 0;
}