#include <bits/stdc++.h>
using namespace std;

using V = vector<int>;

int main() {
  int N;
  cin >> N;

  map<int, V> ma;

  for (int i = 0; i < N - 1; i++) {
    int a, b;
    cin >> a >> b;
    ma[a].push_back(b);
    ma[b].push_back(a);
  }

  for (auto mm : ma) {
    if ((int)mm.second.size() == N - 1) {
      cout << "Yes" << endl;
      return 0;
    }
  }

  cout << "No" << endl;

  return 0;
}