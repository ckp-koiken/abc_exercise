#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  int cnt = 0;
  while (M != 0) {
    int x = N % M;
    M = x;
    cnt++;
  }

  cout << cnt << endl;
  return 0;
}