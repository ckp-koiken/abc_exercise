#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> C(M);
  for (int i = 0; i < M; i++) cin >> C[i];

  vector<int> sumB(M);
  for (int i = 0; i < N; i++) {
    int a, b;
    cin >> a >> b;
    a--;
    sumB[a] += b;
  }

  int ans = 0;

  for (int i = 0; i < M; i++) {
    ans += min(C[i], sumB[i]);
  }

  cout << ans << endl;
  
  return 0;
}