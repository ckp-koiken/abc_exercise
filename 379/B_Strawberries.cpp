#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  string S;
  cin >> N >> K >> S;

  int cnt = 0;
  int ans = 0;
  for (int i = 0; i < N; i++) {
    if (S.at(i) == 'O') {
      cnt++;
      if (cnt == K) {
        cnt = 0;
        ans++;
      }
    } else if (cnt < K && S.at(i) == 'X') {
      cnt = 0;
    }
  }

  // another answer
  // 左から順に歯を使って食べていって
  // 使った歯を順にXに変更していくのは同じ
  // int ans = 0;
  // string t = string(K, 'O');  // K文字分連続したOの文字列を作る
  // // N-K+1文字目まで見て、tと一致する箇所を探す
  // for (int i = 0; i < N - K + 1; i++) {
  //   // substr()を使うとi番目からK文字分の文字列集合を抽出するのに便利
  //   if (S.substr(i, K) == t) {
  //     ans++;
  //     for (int j = i; j < i + K; j++) {
  //       S.at(j) = 'X';
  //     }
  //   }
  // }

  cout << ans << endl;
  return 0;
}