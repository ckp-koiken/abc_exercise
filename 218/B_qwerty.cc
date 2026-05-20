#include <bits/stdc++.h>
using namespace std;

int main() {
  int P;
  for (int i = 0; i < 26; i++) {
    cin >> P;
    cout << char('a' + P - 1);
  }
  cout << '\n';

  return 0;
}