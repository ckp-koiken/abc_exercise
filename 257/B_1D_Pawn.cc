#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K, Q;
  cin >> N >> K >> Q;

  vector<int> pos(K);
  for (int i = 0; i < K; i++) {
    cin >> pos[i];
    pos[i]--;
  }

  while (Q--) {
    int L;
    cin >> L;
    int i = L - 1;

    if (pos[i] == N - 1) continue;

    if (i == K - 1 || pos[i] + 1 < pos[i + 1]) {
      pos[i]++;
    }
  }

  for (int i = 0; i < K; i++) {
    cout << pos[i] + 1 << ' ';
  }

  cout << '\n';
  return 0;
}
