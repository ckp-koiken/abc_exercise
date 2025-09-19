#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  string S;
  for (int i = 0; i <= N; i++) {
    S.push_back('-');
    for (int j = 1; j <= 9; j++) {
      if (N % j == 0 && i % (N / j) == 0) {
        S.at(i) = j + 48;
        break;
      }
    }
  }

  cout << S << endl;

  return 0;
}