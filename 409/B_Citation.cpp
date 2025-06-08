#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<int> A(N);
  for (int i = 0; i < N; i++) {
    cin >> A.at(i);
  }

  for (int x = N; x >= 0; x--) {
    int count = 0;
    for (auto a : A) {
      if (a >= x) count++;
    }
    if (count >= x) {
      cout << x << endl;
      break;
    }
  }
  return 0;
}