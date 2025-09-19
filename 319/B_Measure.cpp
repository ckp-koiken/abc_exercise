#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  string S;
  for (int i = 0; i <= N; i++) {
    // 先に-で埋めておく
    S.push_back('-');

    // 1から9まで調べる
    for (int j = 1; j <= 9; j++) {
      if (N % j == 0 && i % (N / j) == 0) {
        // 条件に合致するjがあれば最初のものを(最小値なので)
        // 文字として代入（+48）
        S.at(i) = j + 48;
        break;
      }
    }

  }

  cout << S << endl;

  return 0;
}