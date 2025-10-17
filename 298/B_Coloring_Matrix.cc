#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<int>> A(N, vector<int>(N));
  vector<vector<int>> B(N, vector<int>(N));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> A[i][j];
    }
  }
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> B[i][j];
    }
  }
  
  for (int k = 0; k < 4; k++) {
    bool ok = true;

    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        if (A[i][j] == 1 && B[i][j] == 0) {
          ok = false;
        }
      }
    }

    if (ok) {
      cout << "Yes" << endl;
      return 0;
    } 

    vector<vector<int>> tmp(N, vector<int>(N));
    for (int i = 0; i < N; i++) {
      for (int j = 0; j < N; j++) {
        tmp[i][j] = A[N - 1 - j][i];
      }
    }
    A = tmp;

  }

  cout << "No" << endl;

  return 0;
}
