#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D;
  string S;
  cin >> N >> D >> S;

  reverse(S.begin(), S.end());

  for (int i = 0; i < N; i++) {
    if (S.at(i) == '@') {
      S.at(i) = '.';
      D--;
    }
    if (D == 0) break;
  }

  reverse(S.begin(), S.end());
  cout << S << endl;
  return 0;
}