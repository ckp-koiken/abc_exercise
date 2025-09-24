#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector<int> c(n);
  vector<vector<int>> a(n);
  for (int i = 0; i < n; i++) {
    cin >> c.at(i);
    a.at(i) = vector<int>(c.at(i));
    for (int j = 0; j < c.at(i); j++) {
      cin >> a.at(i).at(j);
    }
  }
  int x;
  cin >> x;

  vector<bool> p(n);
  for (int i = 0; i < n; i++) {
    p.at(i) = false;
    for (int j = 0; j < c.at(i); j++) {
      if (a.at(i).at(j) == x) p.at(i) = true;
    }
  }

  int cmin = 100;
  for (int i = 0; i < n; i++) {
    if (p.at(i)) cmin = min(cmin, c.at(i));
  }

  vector<int> ans;
  for (int i = 0; i < n; i++) {
    if (p.at(i) && c.at(i) == cmin) ans.push_back(i + 1);
  }

  cout << ans.size() << endl;
  for (int i : ans) {
    cout << i << " ";
  }
  cout << endl;

  return 0;
}