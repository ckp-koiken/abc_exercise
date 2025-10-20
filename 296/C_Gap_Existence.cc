#include <bits/stdc++.h>
using namespace std;

// 愚直に全探索すると計算量が大きすぎてTLEする
// setをうまく使う
int main() {
  int N, X;
  cin >> N >> X;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A[i];
  }

  // Aをsetに保持
  set<int> se(A.begin(), A.end());

  // setの要素をそれぞれ確認
  for (auto a : se) {
    // setの要素は昇順に並ぶので
    // setの各要素にXを足したものが他の要素の中にあればよい
    // つまり要素+Xの位置をfindで探してend()イテレータでなければyes
    if (se.find(a + X) != se.end()) {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;

  return 0;
}