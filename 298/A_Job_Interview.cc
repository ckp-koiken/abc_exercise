#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int good = 0;
  for (int i = 0; i < N; i++) {
    if (S[i] == 'x') {
      cout << "No" << endl;
      return 0;
    }

    if (S[i] == 'o') good++;
  }

  if (good != 0) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}
