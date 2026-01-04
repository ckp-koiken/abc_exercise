#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  int left = 1;
  for (int i = 0; i < N; i++) {
    left *= 2;
  }

  cout << left - 2 * N << endl;
  return 0;
}
