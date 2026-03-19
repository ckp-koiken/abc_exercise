#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  // memo: 引くのはcharの0、'0'でも良い
  int a = S[0] - 48;
  int b = S[2] - 48;

  cout << a * b << endl;
  return 0;
}