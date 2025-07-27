#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> A(M);
  vector<vector<int>> X(N, vector<int>(M));

  for (int i = 0; i < M; i++) {
    cin >> A.at(i);
  }

  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      cin >> X.at(i).at(j);
    }
  }

  vector<int> check(M);
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < M; j++) {
      check.at(j) += X.at(i).at(j);
    }
  }

  int ans = 0;
  for (int i = 0; i < M; i++) {
    if (check.at(i) >= A.at(i)) ans++;
  }

  if (ans == M) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }

  return 0;
}