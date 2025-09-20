#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A, B, C, D;
  vector<vector<bool>> g(100, vector<bool>(100, false));
  
  cin >> N;
  for (int k = 0; k < N; k++) {
    cin >> A >> B >> C >> D;
    for (int i = C; i < D; i++) {
      for (int j = A; j < B; j++) {
        g.at(i).at(j) = true;
      }
    }
  }

  int ans = 0;
  for (int i = 0; i < 100; i++) {
    for (int j = 0; j < 100; j++) {
      if (g.at(i).at(j)) ans++;
    }
  }

  cout << ans << endl;
  return 0;
}