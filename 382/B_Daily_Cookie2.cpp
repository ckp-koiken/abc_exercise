#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D;
  string S;
  cin >> N >> D >> S;

  reverse(S.begin(), S.end());

  for (int i = 0; i < N; i++) {
    if (S.at(i) == '@') {
      S.at(i) = '.';
      D--;
    }
    if (D == 0) break;
  }

  reverse(S.begin(), S.end());

  // another answer
  // D日分ループして、右端から'@'を探して'.'に置き換える
  // for (int i = 0; i < D; i++) {
  //   for (int j = N - 1; j >= 0; j--) {
  //     if (S.at(j) == '@') {
  //       S.at(j) = '.';
  //       break;
  //     }
  //   }
  // }

  cout << S << endl;
  return 0;
}