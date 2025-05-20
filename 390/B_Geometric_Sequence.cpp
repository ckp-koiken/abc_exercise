#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> a(N);
  for (int i = 0; i < N; i++) {
    cin >> a.at(i);
  }

  // 単純にa.at(i+1)/a.at(i) == a.at(i+2)/a.at(i+1)で比較すると
  // 公比が負の数の場合に整数に丸めたときに誤差が出てしまう
  // 分母分子を襷掛けして、a.at(i+1)^2 == a.at(i)*a.at(i+2)で比較する
  // aの数のが大きい場合があるので分数にする時にint64_t(long long)にする
  for (int i = 0; i < N - 2; i++) {
    if ((int64_t)a.at(i + 1) * a.at(i + 1) != (int64_t)a.at(i) * a.at(i + 2)) {
      cout << "No" << endl;  // 一つでも条件に合わなければプログラムを終了
      return 0;
    }
  }
  cout << "Yes" << endl;
  return 0;
}