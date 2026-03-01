#include <bits/stdc++.h>
using namespace std;

// 人1人とその隣の空き席1つを1組に考える
// 11223344...のように数字を書き込む
// 最後に書き込まれる数字はX=N/2なのでN/2 >= Mなら座れる
// ただし席数が奇数でc++の場合は端数が切り捨てられてしまう
// なので(N+1)/2として切り捨てを回避する

int main() {
  int N, M;
  cin >> N >> M;

  if ((N + 1) / 2 >= M) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  return 0;
}