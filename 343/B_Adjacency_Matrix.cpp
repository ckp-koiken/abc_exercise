#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<int>> A(N, vector<int>(N));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> A.at(i).at(j);
    }
  }
  
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (A.at(i).at(j) == 1) {
        cout << j + 1 << " ";
      }
    }
    cout << endl;
  }

  // another answer
  // 答えを収納するための配列を別に用意する
  // 1行ずつ答えを出力
  // for (int i = 0; i < N; i++) {
  //   vector<int> v;
  //   for (int j = 0; j < N; j++) {
  //     if (A.at(i).at(j) == 1) {
  //       v.push_back(j + 1);
  //     }
  //   }
  //   for (int j = 0; j < v.size(); j++) {
  //     cout << v.at(j) << " ";
  //   }
  //   cout << endl;
  // }

  return 0;
}