#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int x = (int)S.at(0) - 48;
  int y = (int)S.at(2) - 48;
  cout << x * y << endl;
  return 0;
}