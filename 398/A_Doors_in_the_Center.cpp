#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  if (N % 2 == 0) {
    for (int i = 0; i < N; i++) {
      if (i == (N/2-1) || i == (N/2)) {
        cout << "=";
      } else {
        cout << "-";
      }
    }
    cout << endl;
  } else {
    for (int i = 0; i < N; i++) {
      if (i == N/2) {
        cout << "=";
      } else {
        cout << "-";
      }
    }
    cout << endl;
  }
  return 0;
}