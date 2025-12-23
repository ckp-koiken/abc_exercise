#include <bits/stdc++.h>
using namespace std;

int main() {
  int L, R;
  cin >> L >> R;
  string s = "atcoder";
  cout << s.substr(L - 1, R - L + 1) << endl;
  return 0;
}