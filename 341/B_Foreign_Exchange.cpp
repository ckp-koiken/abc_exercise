#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  // MEMO: Aの制約が10^9まで
  // 換金の計算によってはintの幅を超えてしまうのでint64_tで確保する
  vector<int64_t> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }
  vector<int> S(N - 1);
  vector<int> T(N - 1);
  for (int i = 0; i < N - 1; i++) {
    cin >> S.at(i);
    cin >> T.at(i);
  }

  for (int i = 0; i < N - 1; i++) {
    // 制約の関係でtmpもint64_tで
    int64_t tmp = A.at(i);
    tmp /= S.at(i);
    A.at(i) %= S.at(i);
    A.at(i + 1) += (T.at(i) * tmp);
  }

  cout << A.at(N - 1) << endl;
  return 0;
}