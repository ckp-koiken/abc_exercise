#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  vector<int> B(N);

  for (int i = 0; i < N; i++) cin >> A[i];
  for (int i = 0; i < N; i++) cin >> B[i];

  int ans1 = 0;
  int ans2 = 0;

  for (int i = 0; i < N; i++) {
    if (A[i] == B[i]) ans1++;
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j) continue;
      if (A[i] == B[j]) ans2++;
    }
  }

  // another answer
  // Bの要素とindexを連想配列で記録させればもっと高速に解ける

  // Bの各要素が何番目(index)にあるのかを管理するmapを用意
  // map<int, int> ma_b;
  // for (int i = 0; i < N; i++) ma_b[B[i]] = i;

  // for (int i = 0; i < N; i++) {
  //   // ma_bにAの要素が存在して
  //   if (ma_b.count(A[i])) {
  //     // その要素がiではない（同じindexではない）ときにans2を増やす
  //     if (ma_b[A[i]] != i) {
  //       ans2++;
  //     }
  //   }
  // }

  cout << ans1 << endl;
  cout << ans2 << endl;
  return 0;
}