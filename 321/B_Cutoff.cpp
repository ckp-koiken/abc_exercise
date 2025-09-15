#include <bits/stdc++.h>
using namespace std;

// 問題文の条件の通りにシミュレーションして
// Nラウンド目のスコアを全探索する
int main() {
  int N, X;
  cin >> N >> X;
  vector<int> A(N);
  // N-1ラウンド分の要素を受け取る
  for (int i = 0; i < N - 1; i++) {
    cin >> A.at(i);
  }

  // Aに入る最後の要素(A.back())を0から100まで全探索する
  while (A.back() <= 100) {
    // ソートする際に最後の要素の順番が狂うので
    // 仮の配列Bにコピーしてソートする
    vector<int> B = A;
    sort(B.begin(), B.end());

    // Bを昇順にソートした上で最初の要素（最低得点）と
    // 最後の要素（最高得点）を除いた要素を合計する
    int s = 0;
    for (int i = 1; i < N - 1; i++) {
      s += B.at(i);
    }
    // 目指すスコアX以上になればAの最後要素を表示して終了
    if (s >= X) {
      cout << A.back() << endl;
      return 0;
    }

    // Aの最後の要素を1ずつ増やす
    A.back()++;
  }

  // ループが回り切れば不可能ということなので-1を出力
  cout << - 1 << endl;
  return 0;
}