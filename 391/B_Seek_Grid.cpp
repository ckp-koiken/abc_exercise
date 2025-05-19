#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<string> S(N), T(M);
  for (int i = 0; i < N; i++) {
    cin >> S.at(i);
  }
  for (int i = 0; i < M; i++) {
    cin >> T.at(i);
  }

  for (int a = 0; a < N - M + 1; a++) {
    for (int b = 0; b < N - M + 1; b++) {
      bool ok = true;
      for (int i = 0; i < M; i++) {
        for (int j = 0; j < M; j++) {
          if (S.at(a + i).at(b + j) != T.at(i).at(j)) {
            ok = false;
          }
        }
      }
      if (ok) {
        cout << a + 1 << ' ' << b + 1 << endl;
      }
    }
  }

  return 0;
}