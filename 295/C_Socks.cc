#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;

  map<int, int> ma;
  for (int i = 0; i < N; i++) {
    int A;
    cin >> A;
    ma[A] += 1;
  }

  int cnt = 0;
  for (auto m : ma) {
    if (m.second >= 2) {
      cnt += m.second / 2;
    }
  }

  cout << cnt << endl;
  return 0;
}