#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int pos = -1;
  for (int i = 0; i < N; i++) {
    if (S[i] != 'o') {
      pos = i;
      break;
    }
  }

  if (pos >= 1) {
    for (int i = pos; i < N; i++) {
      cout << S[i];
    }
    cout << '\n';
  } else if (pos == -1) {
    cout << ' ' << endl;
  } else {
    cout << S << endl;
  }
  return 0;
}