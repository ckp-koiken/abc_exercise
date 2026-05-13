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
  return 0;
}