#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<vector<char>> A(N, vector<char>(N));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cin >> A.at(i).at(j);
    }
  }

  vector<vector<char>> ans(N, vector<char>(N));
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == 0 || j == 0 || i == N - 1 || j == N - 1) {
        if (i == 0 && j < N - 1) ans.at(i).at(j + 1) = A.at(i).at(j);
        if (i < N - 1 && j == N - 1) ans.at(i + 1).at(j) = A.at(i).at(j);
        if (i == N - 1 && j > 0) ans.at(i).at(j - 1) = A.at(i).at(j);
        if (i > 0 && j == 0) ans.at(i - 1).at(j) = A.at(i).at(j);
      } else {
        ans.at(i).at(j) = A.at(i).at(j);
      }
    }
  }

  
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      cout << ans.at(i).at(j);
    }
    cout << endl;
  }
  return 0;
}
