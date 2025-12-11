#include <bits/stdc++.h>
using namespace std;

// 問題の点数が1、2、4点なので2進数を使えばよい
// 点数の合計点は0~7点
// それぞれの合計点数を2進数で表したとき、
// 各桁が1ならばその番号の問題を解けていて、そうでない時解けていない
// bitごとに足し合わせてOR演算を行えばよい
int main() {
  int A, B;
  cin >> A >> B;

  cout << (A | B) << endl;
  return 0;
}