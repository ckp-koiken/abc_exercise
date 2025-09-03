#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  for (int i = 0; i < N - 1; i++) {
    if (S.at(i) == 'a' && S.at(i + 1) == 'b') {
      cout << "Yes" << endl;
      return 0;
    } else if (S.at(i) == 'b' && S.at(i + 1) == 'a') {
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}