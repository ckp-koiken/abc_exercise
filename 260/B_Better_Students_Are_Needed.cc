#include <bits/stdc++.h>
using namespace std;

using P = pair<int, int>;
vector<bool> ok;

int main() {
  int n, x, y, z;
  cin >> n >> x >> y >> z;
  vector<int> a(n), b(n);
  for (int i = 0; i < n; i++) cin >> a[i];
  for (int i = 0; i < n; i++) cin >> b[i];
  vector<bool> ok(n);

  auto f = [&](vector<P> p, int num) {
    sort(p.begin(), p.end());
    for (int i = 0; i < num; i++) {
      ok[p[i].second] = true;
    }
  };

  vector<P> p;
  for (int i = 0; i < n; i++) p.emplace_back(-a[i], i);
  f(p, x);

  p = vector<P>();
  for (int i = 0; i < n; i++) {
    if (!ok[i]) {
      p.emplace_back(-b[i], i);
    }
  }
  f(p, y);

  p = vector<P>();
  for (int i = 0; i < n; i++) {
    if (!ok[i]) {
      p.emplace_back(-a[i]-b[i], i);
    }
  }
  f(p, z);

  for (int i = 0; i < n; i++) {
    if (ok[i]) cout << i + 1 << endl;
  }
  return 0;
}