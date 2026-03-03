#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<string> S(N);
  for (int i = 0; i < N; i++) cin >> S[i];

  set<string> se;
  for (int i = 0; i < N; i++) {
    for (int j = 0; j < N; j++) {
      if (i == j) continue;
      se.insert(S[i]+ S[j]);
    }
  }

  cout << (int)se.size() << endl;
  return 0;
}