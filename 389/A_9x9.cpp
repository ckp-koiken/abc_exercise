#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int x = S.at(0) - 48;
  // int x = S.at(0) - '0';
  int y = S.at(2) - 48;
  // int y = S.at(2) - '0'; // '0'を引くのでもいい
  cout << x * y << endl;
  return 0;
}