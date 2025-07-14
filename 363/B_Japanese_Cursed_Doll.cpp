#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, T, P;
  cin >> N >> T >> P;
  vector<int> L(N);
  for (int i = 0; i < N; i++) {
    cin >> L.at(i);
  }

  int day = 0;
  for (;;) {
    int cnt = 0;
    for (int i = 0; i < N; i++) {
      if (L.at(i) >= T) cnt++;
    }

    if (cnt >= P) {
      cout << day << endl;
      return 0;
    }

    day++;
    for (int i = 0; i < N; i++) {
      L.at(i)++;
    }

  }
  return 0;
}