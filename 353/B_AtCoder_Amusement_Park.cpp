#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  int cnt = 0;
  int vac = K;
  for (int i = 0; i < N; i++) {
    // 空席が足りなければスタートして空席をリセット
    if (A.at(i) > vac) {
      cnt++;
      vac = K;
    }
    // 毎回A.at(i)人座る
    // MEMO: ここをelseにしていた。毎回座ることには変わらないので
    // 条件関係なく空席を減らす
    vac -= A.at(i);
  }
  // 最後に1回スタートする
  // MEMO: 最後に空席が多く残っていたとしても
  // 列がなくなるので強制的に1回スタートする
  cnt++;

  cout << cnt << endl;
  return 0;
}