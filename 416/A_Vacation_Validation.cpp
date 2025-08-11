#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, L, R;
  string S;
  cin >> N >> L >> R >> S;

  for (int i = L - 1; i < R; i++) {
    if (S.at(i) != 'o') {
      cout << "No" << endl;
      return 0;
    }
  }

  cout << "Yes" << endl;
  return 0;
}