#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> rep(M + 1, -1);

  for (int i = 0; i < N; i++) {
    int C, S;
    cin >> C >> S;
    rep[C] = max(rep[C], S);
  }

  for (int i = 1; i <= M; i++) {
    cout << rep[i] << ' ';
  }
  cout << '\n';

  return 0;
}