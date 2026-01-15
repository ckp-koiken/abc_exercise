#include <bits/stdc++.h>
using namespace std;

int main() {
  string N;
  cin >> N;

  int m = (int)N.size();

  cout << N[m - 2] << N[m - 1] << endl;

  // another answer
  // 1の位は10で割った余り
  // 10の位は100で割った余りを10で割った商
  // 100で割った余りだと304などを4で出力してしまうので注意
  // int n;
  // cin >> n;
  // cout << (n % 100) / 10 << n % 10 << endl;
  return 0;
}
