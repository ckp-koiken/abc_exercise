#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  if (S[0] == S.back()) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
  return 0;
}