#include <bits/stdc++.h>
using namespace std;

// TODO: add interpretaion
// 問題文をちゃんと理解するところから
// https://www.youtube.com/watch?v=rqkP7QAIqWE&t=1110s

int main() {
  int n;
  cin >> n;
  vector<int> q(n), r(n);
  for (int i = 0; i < n; i ++) {
    cin >> q.at(i) >> r.at(i);
  }

  int Q;
  cin >> Q;
  for (int qi = 0; qi < Q; qi++) {
    int t, d;
    cin >> t >> d;
    t--;
    d -= r.at(t);
    int ans = (d + q.at(t) - 1) / q.at(t) * q.at(t);
    ans += r.at(t);
    cout << ans << endl;
  }

  return 0;
}