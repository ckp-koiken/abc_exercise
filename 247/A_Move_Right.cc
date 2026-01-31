#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  for (int i = (int)S.size() - 1; i >= 0; i--) {
    if (S[i] == '1') {
      S[i + 1] = '1';
      S[i] = '0';
    }
  }

  cout << S << endl;
  return 0;
}