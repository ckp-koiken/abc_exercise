#include <bits/stdc++.h>
using namespace std;

int main() {
  int64_t N;
  cin >> N;

  // Nが2で割り切れる限りNを2で割る
  while (N % 2 == 0) {
    N /= 2;
  }

  // Nが3で割り切れる限りNを3で割る
  while (N % 3 == 0) {
    N /= 3;
  }

  // Nが1になっていれば問題文の条件を満たすような数と判定できる
  if (N == 1) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}