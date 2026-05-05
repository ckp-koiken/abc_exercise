#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;

  int n = (int)S.size();

  if (S == T) {
    cout << "Yes" << endl;
    return 0;
  }

  for (int i = 0; i < n - 1; i++) {
    string tmp = S;
    swap(tmp[i], tmp[i + 1]);
    if (tmp == T) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;
  return 0;
}