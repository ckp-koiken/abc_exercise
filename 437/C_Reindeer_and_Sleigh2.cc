#include <bits/stdc++.h>
using namespace std;

// トナカイの力pの総和（余力） >= トナカイの重量wの総和である必要がある
// トナカイ全員でソリを引く場合を初期状態として考える（余力 > 重量和0）
// トナカイを一匹ずつソリに乗せるとそのトナカイの力pと重量wが余力から削られる
// ソリに乗ってなくなった力pとソリに乗ることで増える重量wが余力から引かれる（w+p）
// 余力からw+pを小さい順に引いていって余力が負にならない最大トナカイ積載数を求める
// 貪欲法greedy: 後先のことを考えず、その場その場での最善の選択を繰り返していく

// 各テストケース、n匹分のトナカイについて貪欲に処理
int solve() {
  int n;
  cin >> n;
  vector<int> w(n), p(n);
  for (int i = 0; i < n; i++) {
    cin >> w[i] >> p[i];
  }

  // ソリに乗せると減る余力を示す配列を作る
  vector<int> wp(n);
  for (int i = 0; i < n; i++) {
    // 重さ+力
    wp[i] = w[i] + p[i];
  }

  // 減る余力を小さい順にソートする
  sort(wp.begin(), wp.end());

  // 余力を示す変数（値が大きいのでint64_t）
  int64_t remain = 0;
  for (int i = 0; i < n; i++) {
    // pの総和
    remain += p[i];
  }

  // 減る余力が小さい順にトナカイをソリに乗せて余力を減らしていく
  for (int i = 0; i < n; i++) {
    remain -= wp[i];
    // 余力が負になったら終了。i匹（添え字なので1小さい）乗せられる。
    if (remain < 0) return i;
  }

  // ループが終わったら全員乗せられるということなのでn匹乗せられる
  return n;
}

// T個のケースをsolve関数で解く
int main() {
  int T;
  cin >> T;
  for (int ti = 0; ti < T; ti++) {
    cout << solve() << '\n';  // endlだと重いので念のため改行文字
  }
  return 0;
}