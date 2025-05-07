#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q;
  cin >> Q;

  queue<int> que;

  for (int i = 0; i < Q; i++) {
    int t;
    cin >> t;
    if (t == 1) {
      int x;
      cin >> x;
      que.push(x);
    } else {
      cout << que.front() << endl;
      que.pop();
    }
  }

  return 0;
}