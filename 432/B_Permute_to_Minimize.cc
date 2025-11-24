#include <bits/stdc++.h>
using namespace std;

int main() {
  string X;
  cin >> X;

  sort(X.begin(), X.end());
  int n = (int)X.size();
  for (int i = 0; i < n; i++) {
    if (X[i] > '0') {
      swap(X[0], X[i]);
      break;
    }
  }
  cout << X << endl;

  return 0;
}