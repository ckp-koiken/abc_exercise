#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int n = (int)S.size();

  for (int i = 1; i <= n; i++) {
    if (i % 2 != 0) {
      swap(S[i - 1], S[i]);
    }
  }

  cout << S << endl;
  return 0;
}