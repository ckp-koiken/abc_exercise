#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;
  vector<int> current(M + 1);
  vector<int> next(M + 1);

  for (int i = 0; i < N; i++) {
    int a, b;
    cin >> a >> b;
    current[a]++;
    next[b]++;
  }

  for (int i = 1; i <= M; i++) {
    cout << next[i] - current[i] << endl;
  }
  return 0;
}