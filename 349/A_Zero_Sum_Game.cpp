#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  int A;
  int sum = 0;
  for (int i = 0; i < N - 1; i++) {
    cin >> A;
    sum += A;
  }

  cout << 0 - sum << endl;
  // 単に-sumでも良い
  return 0;
}