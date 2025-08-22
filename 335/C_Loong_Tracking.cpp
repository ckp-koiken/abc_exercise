#include <bits/stdc++.h>
using namespace std;
using P = pair<int, int>;

const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, -1, 0, 1};


int main() {
  int N, Q;
  cin >> N >> Q;
  vector<P> ps;

  for (int i = 0; i < N; i++) {
    ps.emplace_back(i + 1, 0);
  }
  reverse(ps.begin(), ps.end());

  map<char, int> mp = {
    {'L', 0}, {'R', 2}, {'U', 3}, {'D', 1}
  };

  for (int qi = 0; qi < Q; qi++) {
    int type;
    cin >> type;
    if (type == 1) {
      char c;
      cin >> c;
      int v = mp[c];
      auto [x, y] = ps.back();
      ps.emplace_back(x + dx[v], y + dy[v]);
    } else {
      int p;
      cin >> p;
      auto [x, y] = ps.at(ps.size() - p);
      cout << x << " " << y << endl;      
    }
  }
  return 0;
}