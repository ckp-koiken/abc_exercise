#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N;
  int M;
  cin >> N >> M;
  int max = 1e9;

  // 合計値（初期値0）
  int64_t X = 0;
  // 各累乗項（0乗から始まるので初期値0）
  int64_t num = 1;
  for (int i = 0; i <= M; i++) {
    X += num;
    // Xの数は64bit整数の範囲で表現できないほど大きくなる
    // 最大値に達した時にinfを表示して処理を打ち切る
    if (X > max) {
      cout << "inf" << endl;
      return 0;
    }
    num *= N;
  }
  
  cout << X << endl;

  return 0;
}