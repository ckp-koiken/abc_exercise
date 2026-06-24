#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) cin >> A[i];

  vector<int> B = A;
  sort(A.begin(), A.end());

  int booby = *(A.end() - 2);

  for (int i = 0; i < N; i++) {
    if (B[i] == booby) {
      cout << i + 1 << endl;
    }
  }

  // another answer
  // Aiのスコア値と順番をペアにしてソートするのでも良い
  // int n;
  // cin >> n;
  // // Ai, 順番のpairを要素に持つ配列を用意
  // vector<pair<int, int>> v;

  // for (int i = 0; i < n; i++) {
  //   int a;
  //   cin >> a;
  //   // make_pair()でpairを作成
  //   v.push_back(make_pair(a, i + 1));
  // }

  // // pairを降順でソート(greater<pair<int, int>>)
  // sort(v.begin(), v.end(), greater<pair<int, int>>());

  // // 前から２番目（ブービー賞）の人の番号を表示
  // cout << v[1].second << endl;

  return 0;
}