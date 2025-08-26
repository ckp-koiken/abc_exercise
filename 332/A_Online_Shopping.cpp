#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, S, K;
  cin >> N >> S >> K;

  int total = 0;
  for (int i = 0; i < N; i++) {
    int P, Q;
    cin >> P >> Q;
    total += P * Q;
  }

  if (total >= S) {
    cout << total << endl;
  } else {
    cout << total + K << endl;
  }
  return 0;
}