#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;
  int n = (int)S.size();
  for (int i = 0; i < 6 / n; i++) {
    cout << S;
  }
  cout << '\n';
  return 0;
}
