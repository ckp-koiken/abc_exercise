#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int n = ((int)S.size() + 1) / 2 - 1;

  cout << S[n] << endl;
  return 0;
}