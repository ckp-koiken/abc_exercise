#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  string S2 = S;
  for (int i = 0; i < (int)S.size(); i++) {
    S2[i] = toupper(S[i]);
  }
  cout << S2 << endl;
  return 0;
}