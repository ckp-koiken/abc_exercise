#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int n = (int)S.size();
  string T = "";

  for (int i = 0; i < n; i++) {
    T.push_back(S[i]);
    if (i != n - 1) T.push_back('o');
  }

  cout << T << endl;
  return 0;
}