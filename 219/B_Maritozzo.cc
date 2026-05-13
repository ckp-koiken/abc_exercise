#include <bits/stdc++.h>
using namespace std;

int main() {
  map<int, string> ma;
  string T;

  for (int i = 1; i <= 3; i++) {
    string tmp;
    cin >> tmp;
    ma[i] = tmp;
  }
  cin >> T;

  for (char c : T) {
    cout << ma[c - '0'];
  }
  cout << '\n';

  // another answer
  // mapではなくvectorでもよい
  // vector<string> S(3);
  // string T;
  // for (string& s : S) {
  //   cin >> s;
  // }
  // cin >> T;
  // string ans;

  // for (char t : T) {
  //   ans += S[t - '1'];
  // }

  // cout << ans << endl;
  return 0;
}