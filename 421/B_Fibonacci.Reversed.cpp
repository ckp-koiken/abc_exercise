#include <bits/stdc++.h>
using namespace std;

int main() {
  vector<int64_t> a(10);
  cin >> a.at(0) >> a.at(1);
  for (int i = 2; i < 10; i++) {
    string s = to_string(a[i - 2] + a[i - 1]);
    reverse(s.begin(), s.end());
    a.at(i) = stoll(s);
  }
  cout << a.at(9) << endl;

  return 0;
}