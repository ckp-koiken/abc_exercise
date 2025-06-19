#include <bits/stdc++.h>
using namespace std;

int main() {
  string S, T;
  cin >> S >> T;
  
  int n;
  string j, k;
  if (S.size() > T.size()) {
    n = S.size();
  } else {
    n = T.size();
  }

  int cnt = 0;
  for (int i = 0; i < n; i++) {
    if (S[i] == T[i]) {
      cnt++;
    } else {
      cnt++;
      cout << cnt << endl;
      return 0;
    }
  }

  cout << 0 << endl;
  return 0;
}