#include <bits/stdc++.h>
using namespace std;

int main() {
  int X;
  cin >> X;

  string S = "HelloWorld";

  for (int i = 0; i < (int)S.size(); i++) {
    if (i != X - 1) cout << S[i];
  }

  cout << '\n';

  return 0;
}