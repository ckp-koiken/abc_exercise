#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  string S;
  cin >> N >> S;

  int cnt = 0;

  for (int i = 0; i < N; i++) {
    if ((S[i] == 'o') || ((i - 1) >= 0 && S[i - 1] == 'o') ||
        ((i + 1) <= N - 1 && S[i + 1] == 'o'))
      cnt++;
  }

  cout << N - cnt << endl;
  return 0;
}