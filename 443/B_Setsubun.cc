#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  int cnt = N;
  int year = 0;
  while (cnt < K) {
    N++;
    cnt += N;
    year++;
  }
  cout << year << endl;

  // another answer
  // while文を無限ループさせてcntがKを超えた段階で答えを出すのでもよい
  // int sum = 0;
  // int year = 0;
  // while (true) {
  //   sum += N;
  //   if (sum >= K) {
  //     cout << year << endl;
  //     break;
  //   }
  //   N++;
  //   year++;
  // }

  return 0;
}