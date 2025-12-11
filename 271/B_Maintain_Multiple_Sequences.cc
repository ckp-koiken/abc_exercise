#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;
  vector<vector<int>> A(N);

  for (int i = 0; i < N; i++) {
    int L;
    cin >> L;

    for (int j = 0; j < L; j++) {
      int a;
      cin >> a;
      A[i].push_back(a);
    }
  }

  // another answer
  // 配列Aの中にL要素の配列をfor文の中で確保すると無駄なく二次元配列を使える
  // for (int i = 0; i < N; i++) {
  //   int L;
  //   cin >> L;
  //   A[i] = vector<int>(L);
  //   for (int j = 0; j < L; j++) {
  //     cin >> A[i][j];
  //   }
  // }

  int s, t;
  for (int i = 0; i < Q; i++) {
    cin >> s >> t;
    s--, t--;
    cout << A[s][t] << endl;
  }

  return 0;
}