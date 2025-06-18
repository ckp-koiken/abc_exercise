#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, K;
  cin >> N;
  vector<int> A(N);
  for (auto &a : A) cin >> a;
  cin >> K;

  int ans = 0;
  for (int x : A) if (K <= x) ans++;
  
  cout << ans << endl;
  return 0;
}