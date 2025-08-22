#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int n = S.size();

  S.at(n - 1) = '4';

  cout << S << endl;
  return 0;
}