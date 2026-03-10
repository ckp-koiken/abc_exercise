#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> H(N);
  for (int i = 0; i < N; i++) {
    cin >> H[i];
  }

  int pos = 0;
  while (true) {
    if ((H[pos] < H[pos + 1]) && (pos != (N - 1))) {
      pos++;
    } else {
      break;
    }
  }

  cout << H[pos] << endl;
  return 0;
}