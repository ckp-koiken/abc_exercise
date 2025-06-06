#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  string n = to_string(N);

  // another answer1
  // ソートして122333になるかどうかで判定
  // sort(n.begin(), n.end());
  // if (n == "122333") {
  //   cout << "Yes" << endl;
  // } else {
  //   cout << "No" << endl;
  // }

  int one = 0;
  int two = 0;
  int three = 0;
  for (char c : n) {
    if (c == '1') one++;
    if (c == '2') two++;
    if (c == '3') three++;
  }

  if (one == 1 && two == 2 && three == 3) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  return 0;
}

// another answer2
  // Nを10で割った余りを記録する
  // その後、Nを10で割って小数点以下を切り捨てる
// vector<int> mem(10, 0);
  // Nを10で割った余りは1、2、3のどれか
  // 該当する配列のインデックス番号の箇所にカウントしていく
// while (N > 0) {
//   mem.at(N % 10)++;
//   N /= 10;
// }
// if (mem.at(1) == 1 && mem.at(2) == 2 && mem.at(3) == 3) {
//   cout << "Yes" << endl;
// } else {
//   cout << "No" << endl;
// }