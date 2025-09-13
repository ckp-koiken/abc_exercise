#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  for (int i = 0; i < N - 2; i++) {
    if (S.at(i) == 'A' && S.at(i + 1) == 'B' && S.at(i + 2) == 'C') {
      cout << i + 1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}