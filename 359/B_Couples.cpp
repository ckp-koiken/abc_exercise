#include <bits/stdc++.h>
using namespace std;

int main() { 
  int N;
  cin >> N;
  vector<int> A(2 * N);
  for (int i = 0; i < 2 * N; i++) {
    cin >> A.at(i);
  }

  int ans = 0;
  for (int i = 0; i < 2 * N - 2; i++) {
    if (A.at(i) == A.at(i+2)) ans++;
  }

  cout << ans << endl;
  return 0;
}