#include <bits/stdc++.h>
using namespace std;

int main() {
  map<int, int> mx;
  map<int, int> my;

  for (int i = 0; i < 3; i++) {
    int x, y;
    cin >> x >> y;
    mx[x]++;
    my[y]++;
  }

  for (auto x : mx) {
    if (x.second == 1) {
      cout << x.first << ' ';
    }
  }

  for (auto y : my) {
    if (y.second == 1) {
      cout << y.first << ' ';
    }
  }

  cout << '\n';

  return 0;
}