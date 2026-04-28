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

  // another answer
  // ある頂点から別の頂点に辺が出ている数だけを数えれば良い
  // 頂点ごとに出ている辺の数を数える一次元のvectorで良い
  // （↑のmapは辺が出ている元の頂点とどこの頂点に伸びているかを全部数えている）
  // （そこまで必要ない）

  // vector<int> deg(N + 1);
  // for (int i = 0; i < N - 1; i++) {
  //   int a, b;
  //   cin >> a >> b;
  //   deg[a]++;
  //   deg[b]++;
  // }

  // for (int i = 1; i <= N; i++) {
  //   if (deg[i] == N - 1) {
  //     cout << "Yes" << endl;
  //     return 0;
  //   }
  // }

  // cout << "No" << endl;

  return 0;
}