#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  int N;
  cin >> S >> N;

  int m = (int)S.size();

  for (int i = N; i < m - N; i++) {
    cout << S[i];
  }

  cout << '\n';
  return 0;
}