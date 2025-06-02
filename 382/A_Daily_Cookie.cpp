#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, D;
  string S;
  cin >> N >> D >> S;

  int v = 0;
  for (char c : S) {
    if (c == '.') v++;
  }
  cout << v + D << endl;
  return 0;
}