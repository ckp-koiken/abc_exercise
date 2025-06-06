#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;
  
  if (N % 2 == 0) {
    cout << "No" << endl;
    return 0;
  }

  for (int i = 0; i < N; i++) {
    if (i >= 0 && i <= (N + 1) / 2 - 2) {
      if (S.at(i) != '1') {
        cout << "No" << endl;
        return 0;
      } 
    }

    if (i == (N + 1) / 2 - 1) {
      if (S.at(i) != '/') {
        cout << "No" << endl;
        return 0;
      }
    }

    if (i >= (N + 1) / 2 && i <= N - 1) {
      if (S.at(i) != '2') {
        cout << "No" << endl;
        return 0;
      } 
    }
  }

  cout << "Yes" << endl;
  return 0;
}