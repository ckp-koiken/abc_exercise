#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int l = S.size();
  int p = 0, res = 0;

  while (p < l) {
    res++;
    if ((p + 1) < l && S.at(p) == '0' && S.at(p + 1) == '0') {
      p += 2;
    } else {
      p++;
    }
  }

  cout << res << endl;
  return 0;
}