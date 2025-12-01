#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<vector<int>> A(N + 1);
  for (int i = 0; i < M; i++) {
    int u, v;
    cin >> u >> v;
    A[u - 1].push_back(v);
    A[v - 1].push_back(u);
  }

  for (int i = 0; i < N; i++) {
    sort(A[i].begin(), A[i].end());
    cout << A[i].size();
    for (int a : A[i]) {
      cout << ' ' << a;
    }
    cout << '\n';
  }

  return 0;
}