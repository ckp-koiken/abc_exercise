#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N >> K;

  int cnt = N;
  int year = 0;
  while (cnt < K) {
    N++;
    cnt += N;
    year++;
  }

  cout << year << endl;
  return 0;
}