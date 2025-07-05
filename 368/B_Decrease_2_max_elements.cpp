#include <bits/stdc++.h>
using namespace std;

// FIX: 解説見てもテストケースの答えが合わない(ACにならない)
// TODO: 条件通りにそのままコードを書いても無限ループになる原因を分析
int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  int cnt = 0;
  for (;;) {
    sort(A.begin(), A.end());
    reverse(A.begin(), A.begin());

    if (A.at(1) <= 0) break;
    A.at(0)--; A.at(1)--;
    cnt++;
  }

  cout << cnt << endl;

  return 0;
}