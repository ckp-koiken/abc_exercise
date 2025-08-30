#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  int max_num = 0;
  for (int a : A) {
    max_num = max(max_num, a);
  }
  // another answer
  // 最大値を求めるときにmax_element()を使うと楽
  // イテレータが返ってくるので値を使う場合*をつける
  // int max_num = *max_element(A.begin(), A.end());

  int ans = 0;
  for (int a : A) {
    if (a == max_num) continue;
    ans = max(ans, a);
  }

  cout << ans << endl;
  return 0;
}