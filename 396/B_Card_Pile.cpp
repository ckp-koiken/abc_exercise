#include <bits/stdc++.h>
using namespace std;

int main() {
  int Q;
  cin >> Q;

  stack<int> sta;
  for (int i = 0; i < 100; i++) {
    sta.push(0);
  }

  for (int i = 0; i < Q; i++) {
    int t;
    cin >> t;
    if (t == 1) {
      int x;
      cin >> x;
      sta.push(x);
    } else {
      cout << sta.top() << endl;
      sta.pop();
    }
  }
  return 0;
}