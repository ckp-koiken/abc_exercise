#include <bits/stdc++.h>
using namespace std;

int main() {
  int m;
  cin >> m;
  vector<int> a;

  for (int i = 10; i >= 0; i--) {
    int x = 1;
    for (int j = 0; j < i; j++) x *= 3;

    while (m >= x) {
      m -= x;
      a.push_back(i);
    }
  }

  cout << a.size() << endl;
  for (int na : a) {
    cout << na << ' ';
  }
  cout << '\n';

  return 0;
}