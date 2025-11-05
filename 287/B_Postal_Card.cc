#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<string> S(N);
  vector<string> T(M);
  
  for (int i = 0; i < N; i++) {
    cin >> S[i];
  }

  for (int i = 0; i < M; i++) {
    cin >> T[i];
  }

  int cnt = 0;
  for (int i = 0; i < N; i++) {
    string tmp_s = S[i].substr(3);

    bool match = false;
    for (int j = 0; j < M; j++) {
      if (T[j] == tmp_s) {
        match = true;
      }
    }

    if (match) cnt++;

  }

  cout << cnt << endl;
  return 0;
}