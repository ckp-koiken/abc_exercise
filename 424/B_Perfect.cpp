#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M, K;
  cin >> N >> M >> K;

  int total = (1 + M) * M / 2;
  vector<int> Q(N + 1);
  for (int i = 0; i < K; i++) {
    int A, B;
    cin >> A >> B;
    Q.at(A) += B;
    if (Q.at(A) == total) {
      cout << A << " ";
    }
  }
  cout << endl;

  // another answer
  // 問題番号の合計で解いたかどうか判定しなくても
  // 単純に解いた問題の数をカウントすればもっと簡単に書ける
  // for (int i = 0; i < K; i++) {
  //   int a, b;
  //   cin >> a >> b;
  //   Q.at(a)++;
  //   if (Q.at(a) == M) {
  //     cout << a << " ";
  //   }
  // }
  return 0;
}