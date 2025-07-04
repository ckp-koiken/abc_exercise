#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;
  vector<int> A(N);
  for (int &a : A) cin >> a;

  vector<int> B(K);
  int index = N - 1;
  for (int &b : B) {
    b = A.at(index);
    index--;
  }
  reverse(B.begin(), B.end());

  for (int b : B) {
    cout << b << " ";
  }

  for (int i = 0; i < N - K; i++) {
    cout << A.at(i) << " ";
  }

  // another ans1
  // 添え字を工夫する
  // 下からK番目はN-K+1番目
  // for (int i = N - K; i < N; i++) {
  //   cout << A.at(i) << " ";
  // }
  // for (int i = 0; i < N - K; i++) {
  //   cout << A.at(i) << " ";
  // }

  // another ans2
  // rotate()関数を用いる
  // rotate(first, middle, last)
  // rorate(A.begin(), A.begin() + N - K, A.end());
  // for (int i = 0; i < N; i++) {
  //   cout << A.at(i) << " ";
  // }

  cout << endl;
  return 0;
}