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
  for (int i = 0; i < N - 1; i++) {
    if (A.at(i) < A.at(i + 1)) {
      check++;
    }
  }
  if (check == N - 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  
  // another answer
  // more simple
  // 条件を満たさない時点でNoを表示してプログラムを終了
  // for (int i = 0; i < N - 1; i++) {
  //   if (A.at(i) >= A.at(i + 1)) {
  //     cout << "No" << endl;
  //     return 0;
  //   } 
  // }
  // cout << "Yes" << endl;

  return 0;
} 