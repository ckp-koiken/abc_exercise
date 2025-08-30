#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int n = (int)S.size();

  for (int i = 0; i < n; i++) {
    cout << S.at(i);
    if (i != n - 1) cout << " ";
  }

  cout << endl;
  return 0;
}