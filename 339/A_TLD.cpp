#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int n = (int)S.size();

  int pos = 0;
  for (int i = 0; i < n; i++) {
    if (S.at(i) == '.') pos = i;
  }

  for (int i = pos + 1; i < n; i++) {
    cout << S.at(i);
  }

  cout << endl;
  return 0;
}