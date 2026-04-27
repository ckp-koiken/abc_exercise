#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  sort(S.begin(), S.end());

  set<string> se;
  do {
    se.insert(S);
  } while (next_permutation(S.begin(), S.end()));

  cout << (int)se.size() << endl;
  return 0;
}