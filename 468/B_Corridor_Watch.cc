#include <bits/stdc++.h>
using namespace std;

int main() {
  int M, D;
  string S;
  cin >> M >> D >> S;

  vector<bool> check(M, false);

  for (int i = 0; i < M; i++) {
    for (int x = 0; x < M; x++) {
      if (S[i] == 'G' && abs(x - i) <= D) check[x] = true;
    }
  }

  int n = count(check.begin(), check.end(), false);

  cout << n << endl;

  return 0;
}