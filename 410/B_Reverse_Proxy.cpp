#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, Q;
  cin >> N >> Q;

  vector<int> cnt(N + 1);
  for (int qi = 0; qi < Q; qi++) {
    int x;
    cin >> x;
    if (x == 0) {
      int l = 100000;
      for (int i = 1; i <= N; i++) {
        l = min(l, cnt.at(i));
      }
      for (int i = 1; i <= N; i++) {
        if (l == cnt.at(i)){
          x = i;
          break;
        }
      }
    }

    cout << x << " ";
    cnt.at(x)++;
  }
  cout << endl;
  return 0;
}