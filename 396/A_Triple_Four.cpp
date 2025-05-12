#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  int check = 0;
  for (int i = 0; i < N - 2; i++) {
    if (A.at(i) == A.at(i + 1) && A.at(i) == A.at(i + 2)){
      check++;
    } 
  }

  if (check > 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  // another answer
  // 3連続を見つけた時点でプログラムを終了してもよい
  // for (int i = 0; i < N - 2; i++) {
  //   if (A.at(i) == A.at(i + 1) && A.at(i) == A.at(i + 2)){
  //     cout << "Yes" << endl;
  //     return 0;
  //   }
  // }
  // cout << "No" << endl;

  return 0;
}
