#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  map<string, int> ma;
  for (int i = 0; i < N; i++) {
    string S;
    cin >> S;
    ma[S]++;
  }

  int cnt = 0;
  for (auto m : ma) {
    cnt = max(cnt, m.second);
  }

  for (auto m : ma) {
    if (m.second == cnt) {
      cout << m.first << endl;
    }
  }
  return 0;
}