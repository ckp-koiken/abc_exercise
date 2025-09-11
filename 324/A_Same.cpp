#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  for (int i = 0; i < N - 1; i++) {
    if (A.at(i) != A.at(i + 1)) {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;

  // another answer
  // 先頭だけ先に読み込んでおいて残りがすべて先頭と等しいかを判定すればよい
  // 配列として読み込むより高速
  // int n, a1;
  // cin >> n >> a1;
  // for (int i = 1; i < n; i++) {
  //   int a;
  //   cin >> a;
  //   if (a != a1) {
  //     cout << "No" << endl;
  //     return 0;
  //   }
  // }

  // cout << "Yes" << endl;
  // return 0;
}
