#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> H(N);
  int cnt = 0;
  for (int i = 0; i < N; i++) {
    cin >> H[i];
    cnt = max(cnt, H[i]);
  }

  for (int i = 0; i < N; i++) {
    if (H[i] == cnt) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  return 0;
}