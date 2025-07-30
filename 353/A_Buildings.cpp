#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> H(N);
  for (int i = 0; i < N; i++) {
    cin >> H.at(i);
  }

  for (int i = 0; i < N; i++) {
    if (H.at(i) > H.at(0)) {
      cout << i + 1 << endl;
      return 0;
    }
  }

  cout << -1 << endl;
  return 0;
}