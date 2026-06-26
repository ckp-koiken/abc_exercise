#include <bits/stdc++.h>
using namespace std;

int main() {
  string X;
  cin >> X;

  set<char> se(X.begin(), X.end());
  if ((int)se.size() == 1) {
    cout << "Weak" << endl;
    return 0;
  }

  bool next = true;
  for (int i = 0; i < 3; i++) {
    if (((int)X[i] + 1) % 10 != (int)X[i + 1] % 10) {
      next = false;
    }
  }

  if (next) {
    cout << "Weak" << endl;
    return 0;
  }

  cout << "Strong" << endl;
  return 0;
}