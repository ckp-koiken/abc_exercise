#include <bits/stdc++.h>
using namespace std;

// TODO: add interpretation
int main() {
  int N, K;
  cin >> N >> K;
  vector<int> a(max(K, N + 1));
  vector<int> s(a.size() + 1);

  for (int i = 0; i < K; i++) {
    a.at(i) = 1;
  }

  for (int i = 0; i < K; i++) {
    s.at(i + 1) = s.at(i) + a.at(i);
  }

  const int mod = 1e9;
  for (int i = K; i <= N; i++) {
    a.at(i) = (s.at(i) - s.at(i - K) + mod) % mod;
    s.at(i + 1) = (s.at(i) + a.at(i)) % mod;
  }

  cout << a.at(N) << endl;

  return 0;
}