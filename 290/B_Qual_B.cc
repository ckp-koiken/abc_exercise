#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  string S;
  cin >> N >> K >> S;

  for (char c : S) {
    if (K > 0) {
      if (c == 'o') {
        cout << 'o';
        K--;
      } else {
        cout << 'x';
      }
    } else {
      cout << 'x';
    }
  }

  cout << '\n';
  return 0;
}