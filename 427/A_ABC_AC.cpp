#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int L = (int)S.size();
  int center = (L + 1) / 2;

  for (int i = 0; i < L; i++) {
    if (i == center - 1) continue;
    cout << S[i];
  }
  cout << endl;

  return 0;
}
