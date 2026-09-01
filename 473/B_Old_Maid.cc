#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  map<int, int> ma;
  for (int i = 0; i < N; i++) {
    int a;
    cin >> a;
    ma[a]++;
  }

  int ans = 0;
  for (auto m : ma) {
    if (m.second % 2 == 1) {
      ans += m.first;
    }
  }

  cout << ans << endl;
  return 0;
}