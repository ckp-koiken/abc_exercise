#include <bits/stdc++.h>
using namespace std;

int main() {
  string S;
  cin >> S;

  int n = (int)S.size();
  vector<string> v(n);
  for (int i = 0; i < n; i++) {
    v[i] = S.substr(i, n - i) + S.substr(0, i);
  }

  cout << *min_element(v.begin(), v.end()) << endl;;
  cout << *max_element(v.begin(), v.end()) << endl;;

  return 0;
}