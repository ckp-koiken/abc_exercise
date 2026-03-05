#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<string> C(N + 1), D(M + 1);
  vector<int> P(M + 1);
  for (int i = 1; i <= N; i++) cin >> C[i];
  for (int i = 1; i <= M; i++) cin >> D[i];
  for (int i = 0; i <= M; i++) cin >> P[i];

  int total = 0;
  for (int i = 1; i <= N; i++) {
    if (find(D.begin(), D.end(), C[i]) == D.end()) {
      total += P[0];
    } else {
      for (int j = 1; j <= M; j++) {
        if (C[i] == D[j]) {
          total += P[j];
        }
      }
    }
  }

  cout << total << endl;
  return 0;
}